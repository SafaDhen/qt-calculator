/****************************************************************************
** Meta object code from reading C++ file 'test_calculator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../test_calculator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTest_calculatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTest_calculatorENDCLASS = QtMocHelpers::stringData(
    "Test_calculator",
    "testSquareNegative",
    "",
    "testAddition",
    "testDivision",
    "testMultiplication",
    "testDivisionMitNull",
    "testMinus",
    "testWurzel",
    "testSecondWurzel",
    "testKlammer",
    "testsinRad",
    "testSinGrad",
    "testSinGon",
    "testInvalidSin"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTest_calculatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

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

Q_CONSTINIT const QMetaObject Test_calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTest_calculatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTest_calculatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTest_calculatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Test_calculator, std::true_type>,
        // method 'testSquareNegative'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testAddition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testDivision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testMultiplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testDivisionMitNull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testMinus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testWurzel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSecondWurzel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testKlammer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testsinRad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSinGrad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSinGon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testInvalidSin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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

const QMetaObject *Test_calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Test_calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTest_calculatorENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
