/****************************************************************************
** Meta object code from reading C++ file 'dialogmanual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dialogmanual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogmanual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogManual_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogManual_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogManual_t qt_meta_stringdata_DialogManual = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogManual"
QT_MOC_LITERAL(1, 13, 14), // "on_chkBoxUnder"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "checked"
QT_MOC_LITERAL(4, 37, 15), // "on_chkBoxItalic"
QT_MOC_LITERAL(5, 53, 13), // "on_chkBoxBold"
QT_MOC_LITERAL(6, 67, 17) // "setPlainTextColor"

    },
    "DialogManual\0on_chkBoxUnder\0\0checked\0"
    "on_chkBoxItalic\0on_chkBoxBold\0"
    "setPlainTextColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogManual[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void DialogManual::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogManual *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_chkBoxUnder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_chkBoxItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_chkBoxBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setPlainTextColor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogManual::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DialogManual.data,
    qt_meta_data_DialogManual,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogManual::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogManual::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogManual.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogManual::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
