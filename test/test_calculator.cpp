#include <QCoreApplication>
#include <QtTest>

#include "calculator.h"

class TestCalculator : public QObject {
    Q_OBJECT

private slots:
    void testAddition();
};

void testAddition() {
    Calculator calc;
    QCOMPARE(calc.Rechner("2+2"), 4.0);
}
void testSubtraction() {
    Calculator calc;
    QCOMPARE(calc.Rechner("10-3"), 7.0);
}

void testDivisionByZero() {
    Calculator calc;
    QCOMPARE(calc.Rechner("5/0"), 0.0); // Simule une erreur et retourne 0
}

void testSquareRoot() {
    Calculator calc;
    double result = calc.Rechner("sqrt(16)");
    QCOMPARE(result, 4.0);
}

void testParentheses() {
    Calculator calc;
    QCOMPARE(calc.Rechner("(2+3)*4"), 20.0);
}

QTEST_MAIN(TestCalculator)
#include "test_calculator.moc"
