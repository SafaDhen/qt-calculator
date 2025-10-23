#include "test_calculator.h"
#include"calculator.h"
#include<cmath>
Test_calculator::Test_calculator() {}

void Test_calculator::testSquareNegative() //first wurzel test
{
    Calculator cal;
    QVERIFY_EXCEPTION_THROWN(cal.wurzelRechner("-16"),invalid_argument);
}

void Test_calculator::testAddition()
{
    Calculator cal;
    QCOMPARE(cal.Rechner("2+2"),4);
}

void Test_calculator::testDivision()
{
    Calculator cal;
    QCOMPARE(cal.Rechner("1/2"),0.5);
}

void Test_calculator::testMultiplication()
{
    Calculator cal;
    QCOMPARE(cal.Rechner("9*9"),81);
}

void Test_calculator::testDivisionMitNull()
{
    Calculator cal;
    QVERIFY_EXCEPTION_THROWN(cal.Rechner("5/0"),invalid_argument);
}

void Test_calculator::testMinus()
{
    Calculator cal;
    QCOMPARE(cal.Rechner("0-33"),-33);
}

void Test_calculator::testWurzel() // second  wurzel test
{
    Calculator cal;
    QCOMPARE(cal.wurzelRechner("9"),3);
}

void Test_calculator::testSecondWurzel() //third test wurzel
{
    Calculator cal;
    QVERIFY_EXCEPTION_THROWN(cal.wurzelRechner("4*(2*"),invalid_argument);
}

void Test_calculator::testKlammer()
{
    Calculator cal;
    QVERIFY_EXCEPTION_THROWN(cal.Rechner("4*(2.4("),invalid_argument);
}

void Test_calculator::testsinRad()
{
    Calculator cal;
    QCOMPARE(cal.Rechner("sin(0.0)"),0.0);
    QCOMPARE(cal.Rechner("sin(3.141592653589793/2)"),1.0);
}

void Test_calculator::testSinGrad()
{
    Calculator cal;
cal.setPrecision("Grad");
    QCOMPARE(cal.Rechner("sin(90)"),1.0);
}

void Test_calculator::testSinGon()
{
    Calculator cal;
    cal.setPrecision("Gon");
    QCOMPARE(cal.Rechner("sin(100)"),1.0);
}

void Test_calculator::testInvalidSin()
{
    Calculator cal;
    QVERIFY_EXCEPTION_THROWN(cal.Rechner("sin"),invalid_argument);
}
