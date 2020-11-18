/****************************************************************************
** Meta object code from reading C++ file 'addin_rephotographer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/scene_addins/addin_rephotographer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_rephotographer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddinRephotographer_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinRephotographer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinRephotographer_t qt_meta_stringdata_AddinRephotographer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AddinRephotographer"
QT_MOC_LITERAL(1, 20, 10), // "on_rephoto"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "on_rephoto_view"
QT_MOC_LITERAL(4, 48, 14), // "mve::View::Ptr"
QT_MOC_LITERAL(5, 63, 4), // "view"
QT_MOC_LITERAL(6, 68, 14) // "on_rephoto_all"

    },
    "AddinRephotographer\0on_rephoto\0\0"
    "on_rephoto_view\0mve::View::Ptr\0view\0"
    "on_rephoto_all"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinRephotographer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    1,   30,    2, 0x09 /* Protected */,
       6,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void AddinRephotographer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddinRephotographer *_t = static_cast<AddinRephotographer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_rephoto(); break;
        case 1: _t->on_rephoto_view((*reinterpret_cast< mve::View::Ptr(*)>(_a[1]))); break;
        case 2: _t->on_rephoto_all(); break;
        default: ;
        }
    }
}

const QMetaObject AddinRephotographer::staticMetaObject = {
    { &AddinBase::staticMetaObject, qt_meta_stringdata_AddinRephotographer.data,
      qt_meta_data_AddinRephotographer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddinRephotographer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinRephotographer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddinRephotographer.stringdata0))
        return static_cast<void*>(const_cast< AddinRephotographer*>(this));
    return AddinBase::qt_metacast(_clname);
}

int AddinRephotographer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddinBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
