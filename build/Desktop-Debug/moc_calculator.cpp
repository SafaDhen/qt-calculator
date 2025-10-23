/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculator_t {
    QByteArrayData data[16];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Calculator"
QT_MOC_LITERAL(1, 11, 13), // "digit_pressed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 28), // "on_pushButton_punkt_released"
QT_MOC_LITERAL(4, 55, 34), // "on_pushButton_klammer_auf_rel..."
QT_MOC_LITERAL(5, 90, 33), // "on_pushButton_klammer_zu_rele..."
QT_MOC_LITERAL(6, 124, 17), // "operation_pressed"
QT_MOC_LITERAL(7, 142, 28), // "on_pushButton_clear_released"
QT_MOC_LITERAL(8, 171, 29), // "on_pushButton_return_released"
QT_MOC_LITERAL(9, 201, 28), // "on_pushButton_equal_released"
QT_MOC_LITERAL(10, 230, 29), // "on_pushButton_square_released"
QT_MOC_LITERAL(11, 260, 27), // "on_pushButton_Grad_released"
QT_MOC_LITERAL(12, 288, 26), // "on_pushButton_Rad_released"
QT_MOC_LITERAL(13, 315, 26), // "on_pushButton_Gon_released"
QT_MOC_LITERAL(14, 342, 26), // "on_pushButton_sin_released"
QT_MOC_LITERAL(15, 369, 25) // "on_pushButton_pi_released"

    },
    "Calculator\0digit_pressed\0\0"
    "on_pushButton_punkt_released\0"
    "on_pushButton_klammer_auf_released\0"
    "on_pushButton_klammer_zu_released\0"
    "operation_pressed\0on_pushButton_clear_released\0"
    "on_pushButton_return_released\0"
    "on_pushButton_equal_released\0"
    "on_pushButton_square_released\0"
    "on_pushButton_Grad_released\0"
    "on_pushButton_Rad_released\0"
    "on_pushButton_Gon_released\0"
    "on_pushButton_sin_released\0"
    "on_pushButton_pi_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digit_pressed(); break;
        case 1: _t->on_pushButton_punkt_released(); break;
        case 2: _t->on_pushButton_klammer_auf_released(); break;
        case 3: _t->on_pushButton_klammer_zu_released(); break;
        case 4: _t->operation_pressed(); break;
        case 5: _t->on_pushButton_clear_released(); break;
        case 6: _t->on_pushButton_return_released(); break;
        case 7: _t->on_pushButton_equal_released(); break;
        case 8: _t->on_pushButton_square_released(); break;
        case 9: _t->on_pushButton_Grad_released(); break;
        case 10: _t->on_pushButton_Rad_released(); break;
        case 11: _t->on_pushButton_Gon_released(); break;
        case 12: _t->on_pushButton_sin_released(); break;
        case 13: _t->on_pushButton_pi_released(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Calculator.data,
    qt_meta_data_Calculator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
