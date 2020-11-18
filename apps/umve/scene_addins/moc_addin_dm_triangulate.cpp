/****************************************************************************
** Meta object code from reading C++ file 'addin_dm_triangulate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/scene_addins/addin_dm_triangulate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_dm_triangulate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddinDMTriangulate_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinDMTriangulate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinDMTriangulate_t qt_meta_stringdata_AddinDMTriangulate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AddinDMTriangulate"
QT_MOC_LITERAL(1, 19, 22), // "on_triangulate_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "on_select_colorimage"
QT_MOC_LITERAL(4, 64, 4), // "name"
QT_MOC_LITERAL(5, 69, 16) // "on_view_selected"

    },
    "AddinDMTriangulate\0on_triangulate_clicked\0"
    "\0on_select_colorimage\0name\0on_view_selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinDMTriangulate[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void AddinDMTriangulate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddinDMTriangulate *_t = static_cast<AddinDMTriangulate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_triangulate_clicked(); break;
        case 1: _t->on_select_colorimage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_view_selected(); break;
        default: ;
        }
    }
}

const QMetaObject AddinDMTriangulate::staticMetaObject = {
    { &AddinBase::staticMetaObject, qt_meta_stringdata_AddinDMTriangulate.data,
      qt_meta_data_AddinDMTriangulate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddinDMTriangulate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinDMTriangulate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddinDMTriangulate.stringdata0))
        return static_cast<void*>(const_cast< AddinDMTriangulate*>(this));
    return AddinBase::qt_metacast(_clname);
}

int AddinDMTriangulate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
