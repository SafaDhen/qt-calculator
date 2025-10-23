#include "calculator.h"
#include "test_calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();

    Test_calculator t;
    QTest::qExec(&t);
    return a.exec();
}
