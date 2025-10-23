/****************************************************************************
** Meta object code from reading C++ file 'test_calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../test_calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Test_calculator_t {
    QByteArrayData data[15];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Test_calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Test_calculator_t qt_meta_stringdata_Test_calculator = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Test_calculator"
QT_MOC_LITERAL(1, 16, 18), // "testSquareNegative"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "testAddition"
QT_MOC_LITERAL(4, 49, 12), // "testDivision"
QT_MOC_LITERAL(5, 62, 18), // "testMultiplication"
QT_MOC_LITERAL(6, 81, 19), // "testDivisionMitNull"
QT_MOC_LITERAL(7, 101, 9), // "testMinus"
QT_MOC_LITERAL(8, 111, 10), // "testWurzel"
QT_MOC_LITERAL(9, 122, 16), // "testSecondWurzel"
QT_MOC_LITERAL(10, 139, 11), // "testKlammer"
QT_MOC_LITERAL(11, 151, 10), // "testsinRad"
QT_MOC_LITERAL(12, 162, 11), // "testSinGrad"
QT_MOC_LITERAL(13, 174, 10), // "testSinGon"
QT_MOC_LITERAL(14, 185, 14) // "testInvalidSin"

    },
    "Test_calculator\0testSquareNegative\0\0"
    "testAddition\0testDivision\0testMultiplication\0"
    "testDivisionMitNull\0testMinus\0testWurzel\0"
    "testSecondWurzel\0testKlammer\0testsinRad\0"
    "testSinGrad\0testSinGon\0testInvalidSin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Test_calculator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Test_calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Test_calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testSquareNegative(); break;
        case 1: _t->testAddition(); break;
        case 2: _t->testDivision(); break;
        case 3: _t->testMultiplication(); break;
        case 4: _t->testDivisionMitNull(); break;
        case 5: _t->testMinus(); break;
        case 6: _t->testWurzel(); break;
        case 7: _t->testSecondWurzel(); break;
        case 8: _t->testKlammer(); break;
        case 9: _t->testsinRad(); break;
        case 10: _t->testSinGrad(); break;
        case 11: _t->testSinGon(); break;
        case 12: _t->testInvalidSin(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Test_calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Test_calculator.data,
    qt_meta_data_Test_calculator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Test_calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Test_calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Test_calculator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Test_calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
