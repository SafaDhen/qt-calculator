
#ifndef TEST_CALCULATOR_H
#define TEST_CALCULATOR_H
#include<QCoreApplication>
#include<QTest>
#include <QObject>

class Test_calculator:public QObject
{
    Q_OBJECT
public:
    Test_calculator();
private slots:
    void testSquareNegative();
    void testAddition();
    void testDivision();
    void testMultiplication();
    void testDivisionMitNull();
    void testMinus();
    void testWurzel();
    void testSecondWurzel();
    void testKlammer();
    void testsinRad();
    void testSinGrad();
    void testSinGon();
    void testInvalidSin();
};

#endif // TEST_CALCULATOR_H
