#include "calculator.h"
#include "ui_calculator.h"
#include<QDebug>
#include<QMessageBox>
#include<istream>
#include<sstream>
#include<cmath>
#include<exception>
#include <QRegularExpression> // Für QRegularExpression

using namespace std;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
     ui->label_precision->setText("Rad");
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(operation_pressed()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(operation_pressed()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(operation_pressed()));
    // connect(ui->pushButton_equal,SIGNAL(released()),this,SLOT(on_pushButton_equal_released()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::digit_pressed()
{


 QString currentText = ui->label->text();
    if(currentText=="0"||currentText=="ERROR"||equal==true)
 {
   QPushButton* button = qobject_cast<QPushButton*>(sender());
   if (button) {
       equal=false;
       input =button->text();
       ui->label->setText(input);
   }
    }
    else
    {
        equal=false;
        QPushButton* button = qobject_cast<QPushButton*>(sender());
        if (button) {
            input =currentText+ button->text();
            ui->label->setText(input);
        }
    }

}

void Calculator::on_pushButton_punkt_released() // Auto-Connect
{
    QString currentText = ui->label->text();

    // Prüfen, ob der letzte "Token" (Zahl) bereits einen Punkt enthält
    if (!currentText.isEmpty() &&
        !currentText.split(QRegularExpression("[^0-9]")).last().contains('.')) {
        ui->label->setText(currentText + "."); // Punkt hinzufügen
    } else {
        ui->label->setText(ui->label->text());
    }
}




void Calculator::on_pushButton_klammer_auf_released() //auto connect
{
   ui->label->setText(ui->label->text()+"(");
}


void Calculator::on_pushButton_klammer_zu_released() //auto connect
{
    ui->label->setText(ui->label->text()+")");
}

void Calculator::operation_pressed()
{
    QString currentText = ui->label->text();
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        if(currentText=="0")
        {
            input=button->text();
           ui->label->setText(input);
        }
        else
        {
            input =currentText+button->text();
            ui->label->setText(input);
        }


    }
}


void Calculator::on_pushButton_clear_released() //auto connect
{
    ui->label->setText("0");
}


void Calculator::on_pushButton_return_released() //auto connect
{
    QString currentText=ui->label->text();
    if( !currentText.isEmpty()){
        currentText.chop(1);
        ui->label->setText(currentText);
    }
}



void Calculator::on_pushButton_equal_released()
{
    try
    {
    QString currentString=ui->label->text();
    string eingabe=currentString.toStdString();
    QString precision=ui->label_precision->text();
    for(unsigned int i=0; i< eingabe.size(); i++)
    {


        if(eingabe.substr(i,2)=="\xCF\x80"&& precision=="Rad" )
        {
            eingabe.replace(i,2,"3.141592653589793");
        }
        else if(eingabe.substr(i,2)=="\xCF\x80"&& precision=="Grad")
        {
            eingabe.replace(i,2,"180");
        }
        else if (eingabe.substr(i,2)=="\xCF\x80"&& precision=="Gon")
        {
            eingabe.replace(i,2,"200");
        }
    }
    double result=Rechner(eingabe);

    QString newResult=QString::number(result,'g',15);
    ui->label->setText(newResult);
    equal=true;

    }
    catch(invalid_argument& e)
    {
        QMessageBox::information(this,"ERROR",e.what());
        ui->label->setText("0");
    }
    catch (...){
        QMessageBox::information(this,"ERROR", "UNKNOW FEHLER");
    }
}
double Calculator::ausdruck(const string& eingabe, size_t& index)
{
    double result;
    if (index >= eingabe.length()) return 0;

    char zeichen = eingabe[index];
    if (zeichen == '-') {
        index++;
        check(eingabe, index);
        result = -summand(eingabe, index);
    } else {
        if (zeichen == '+') {
            index++;
            check(eingabe, index);
        }
        result = summand(eingabe, index);
    }

    while (eingabe[index] == '+' || eingabe[index] == '-') {
        char op = eingabe[index];
        index++;
        check(eingabe, index);
        if (op == '+')
            result += summand(eingabe, index);
        else
            result -= summand(eingabe, index);
    }

    return result;

}

void Calculator::check(const string& eingabe, size_t& index)
{
    if (index >= eingabe.length()) return; // Überprüfen, ob Index gültig ist
    char zeichen = eingabe[index];
    if ((zeichen < '0' || zeichen > '9') &&
        zeichen != 'e' &&
        zeichen != '+' &&
        zeichen != '-' &&
        zeichen != '*' &&
        zeichen != '/' &&
        zeichen != '(' &&
        zeichen != ')' &&
        zeichen != '.' &&
        zeichen != ' ' &&
        zeichen != 'v' &&
        zeichen != 's' &&
        zeichen != 'i' &&
        zeichen != 'n'  ) {
       // cout << "Fehlerhaftes Zeichen " << zeichen << " wird übersprungen" << endl;
        throw invalid_argument("Fehlerhaftes Zeichen");
        index++;
    }

}

double Calculator::winkelInRadiant(double value)
{
   QString wahl =ui->label_precision->text();
    if (wahl == "Grad")
    {
        return value/180.0*M_PI; // Grad in Radiant
    }
    else if (wahl == "Gon")
    {
        return value /200.0*M_PI; // Gon in Radiant
    }
    else
    {
        return value; // Radiant bleibt unverändert  "3.141592653589793" "3.141592653589793"
    }

}

double Calculator::Rechner(string eingabe)
{
    size_t index = 0;      // Startindex der Eingabe

    while (index < eingabe.length()) {
        // cout << "\n > "; // Prompt des Rechners
        double result = ausdruck(eingabe, index);
        // cout << "Ergebnis: " << result << endl;
        return result;
    }
    return 0;

}

double Calculator::wurzelRechner(string zahl)
{
    double result;

     double result1=Rechner(zahl);
    if(result1<0)
     {
         throw invalid_argument("Wurzel negative Zahl nicht moglich");

     }
    else
    {
         result=sqrt(result1);
    }


    return result;
}

QString Calculator::getPrecision()
{
    return ui->label_precision->text();
}

void Calculator::setPrecision(const QString &newPrecision)
{
    ui->label_precision->setText(newPrecision);
}
double Calculator::summand(const string& eingabe, size_t& index)
{
    double result = factor(eingabe, index);
    while (eingabe[index] == '*' || eingabe[index] == '/') {
        char op = eingabe[index];
        index++;
        check(eingabe, index);
        if (op == '*')
            result *= factor(eingabe, index);
        else {
            double tmp = factor(eingabe, index);
            if (tmp == 0){
               // QMessageBox::information(this,"ERROR","Division durch null nicht möeglich");    //cout << "Division durch 0, Rechnung abgebrochen" << endl;
                throw invalid_argument("Divison durch Null nicht mooeglich");
            }
            else
                result /= tmp;
        }
    }
    return result;

}

// double Calculator::factor(const string& eingabe, size_t& index)
// {
//     double result;
//     if (index >= eingabe.length()) return 0;

//     char zeichen = eingabe[index];
//     if (zeichen == '(') {
//         index++; // Öffnende Klammer überspringen
//         check(eingabe, index);
//         result = ausdruck(eingabe, index);
//         if (eingabe[index] != ')') // Nach Ausdruck darf hier nur ')' kommen
//         {
//          //QMessageBox::information(this,"ERROR","Klammer  fehlt");   // cout << "Rechte Klammer fehlt!" << endl;
//             throw invalid_argument("Klammer  fehlt");
//         }
//         else
//             index++; // Schließende Klammer überspringen


//         check(eingabe, index);
//     } else { // Wenn kein Klammerausdruck, kann hier nur Zahl kommen
//         result = zahl(eingabe, index);
//     }
//     return result;

// }

double Calculator::factor(const string& eingabe, size_t& index)
{
    double result;
    if (index >= eingabe.length()) return 0;

    char zeichen = eingabe[index];

    // Überprüfung auf das Symbol 'π'
    // if (zeichen == 'π') // Wenn π gefunden wird
    // {
    //     index++; // π überspringen

    // }
    // if(eingabe.substr(index,2)=="\xCF\x80")
    // {
    //     index++;
    //     return M_PI; // Gib den Wert von π zurück
    // }
    // Überprüfung auf Sinusfunktion
    if (eingabe.substr(index, 3) == "sin")
    {
        index += 3; // "sin" überspringen
        check(eingabe, index);
        if (eingabe[index] == '(')
        {
            index++; // '(' überspringen
            check(eingabe, index);
            double value = ausdruck(eingabe, index); // Inneren Ausdruck berechnen
            if (eingabe[index] == ')')
            {
                index++; // ')' überspringen
                return sin(winkelInRadiant(value)); // Sinus berechnen
            }
            else
            {
                throw invalid_argument("Fehlende schließende Klammer bei sin");
            }
        }
        else
        {
            throw invalid_argument("Fehlende öffnende Klammer bei sin");
        }
    }

    // Überprüfung auf Wurzelfunktion
    if (zeichen == 'v') // Wurzelsymbol (v) gefunden
    {
        index++; // 'v' überspringen
        check(eingabe, index);
        if (eingabe[index] == '(')
        {
            index++; // '(' überspringen
            double value = ausdruck(eingabe, index); // Inneren Ausdruck berechnen
            if (eingabe[index] == ')')
            {
                index++; // ')' überspringen
                if (value < 0)
                {
                    throw invalid_argument("Wurzel negativer Zahl ist nicht definiert");
                }
                return sqrt(value); // Quadratwurzel berechnen
            }
            else
            {
                throw invalid_argument("Fehlende schließende Klammer bei Wurzel");
            }
        }
        else
        {
            throw invalid_argument("Fehlende öffnende Klammer bei Wurzel");
        }
    }

    // Überprüfung auf Klammerausdrücke
    if (zeichen == '(')
    {
        index++; // Öffnende Klammer überspringen
        check(eingabe, index);
        result = ausdruck(eingabe, index);
        if (eingabe[index] != ')') // Nach Ausdruck darf hier nur ')' kommen
        {
            throw invalid_argument("Fehlende schließende Klammer");
        }
        else
        {
            index++; // Schließende Klammer überspringen
        }
        check(eingabe, index);
    }
    else
    {
        // Wenn kein Klammerausdruck, kann hier nur eine Zahl kommen
        result = zahl(eingabe, index);
    }

    return result;
}


double Calculator::zahl(const string& eingabe, size_t& index)
{
    double result = 0;
    if (index >= eingabe.length()) return 0;

    while (isdigit(eingabe[index])) {
        result = 10 * result + (eingabe[index] - '0');
        index++;
        check(eingabe, index);
    }

    if (eingabe[index] == '.') {
        index++;
        check(eingabe, index);
        double nachkommastelle = 1.0;
        while (isdigit(eingabe[index])) {
            nachkommastelle *= 10.0;
            result = result + double(eingabe[index] - '0') / nachkommastelle;
            index++;
            check(eingabe, index);
        }
    }
    return result;

}




void Calculator::on_pushButton_square_released() //auto connect
{

    QString currentText = ui->label->text();
    if (currentText == "0" || equal == true)
    {
        ui->label->setText("v(");
        equal = false;
    }
    else
    {
        ui->label->setText(currentText + "v(");
    }


    // try
    // {
    // QString CurrenText=ui->label->text();
    // //double numer= CurrenText.toDouble();
    // string CurrentString=CurrenText.toStdString();
    // //double result2=Rechner(CurrentString);
    // double result =wurzelRechner(CurrentString);
    // QString NewText=QString::number(result);

    // ui->label->setText(NewText);
    // }
    // catch(invalid_argument& e)
    // {
    //     QMessageBox::information(this,"ERROR",e.what());
    //     ui->label->setText("0");
    // }
}


void Calculator::on_pushButton_Grad_released()
{
    ui->label_precision->setText("Grad");
}


void Calculator::on_pushButton_Rad_released()
{
    ui->label_precision->setText("Rad");
}


void Calculator::on_pushButton_Gon_released()
{
    ui->label_precision->setText("Gon");
}


void Calculator::on_pushButton_sin_released()
{
    QString currentText = ui->label->text();
    if (currentText == "0" || equal == true)
    {
        ui->label->setText("sin(");
        equal = false;
    }
    else
    {
        ui->label->setText(currentText + "sin(");
    }

}


void Calculator::on_pushButton_pi_released()
{
    QString currentText = ui->label->text();
    if (currentText == "0" || equal == true)
    {
        ui->label->setText("π");
        equal = false;
    }
    else
    {
        ui->label->setText(currentText + "π");
    }
}

