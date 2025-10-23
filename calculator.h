#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<QString>
#include <QMainWindow>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    QString input;
    double Rechner(string eingabe);
    double wurzelRechner(string zahl);
    QString getPrecision();
    void setPrecision(const QString& newPrecision);

private:
    Ui::Calculator *ui;
    double zahl(const string &eingabe, size_t &index);
    double factor(const string &eingabe, size_t &index);
    double summand(const string &eingabe, size_t &index);
    double ausdruck(const string &eingabe, size_t &index);
    void check(const string &eingabe, size_t &index);
    double winkelInRadiant(double value);

    bool equal=false;
private slots:
    void digit_pressed();
    void on_pushButton_punkt_released();

    void on_pushButton_klammer_auf_released();
    void on_pushButton_klammer_zu_released();
    void operation_pressed();
    void on_pushButton_clear_released();
    void on_pushButton_return_released();


    void on_pushButton_equal_released();
    void on_pushButton_square_released();

    void on_pushButton_Grad_released();
    void on_pushButton_Rad_released();
    void on_pushButton_Gon_released();
    void on_pushButton_sin_released();
    void on_pushButton_pi_released();
};
#endif // CALCULATOR_H
