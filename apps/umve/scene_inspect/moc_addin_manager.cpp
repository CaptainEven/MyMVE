/****************************************************************************
** Meta object code from reading C++ file 'addin_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/scene_inspect/addin_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddinManager_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinManager_t qt_meta_stringdata_AddinManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddinManager"
QT_MOC_LITERAL(1, 13, 18), // "on_set_clear_color"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "apply_clear_color"
QT_MOC_LITERAL(4, 51, 17), // "on_mesh_generated"
QT_MOC_LITERAL(5, 69, 11), // "std::string"
QT_MOC_LITERAL(6, 81, 4), // "name"
QT_MOC_LITERAL(7, 86, 22), // "mve::TriangleMesh::Ptr"
QT_MOC_LITERAL(8, 109, 4) // "mesh"

    },
    "AddinManager\0on_set_clear_color\0\0"
    "apply_clear_color\0on_mesh_generated\0"
    "std::string\0name\0mve::TriangleMesh::Ptr\0"
    "mesh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinManager[] = {

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
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    2,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

       0        // eod
};

void AddinManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddinManager *_t = static_cast<AddinManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_set_clear_color(); break;
        case 1: _t->apply_clear_color(); break;
        case 2: _t->on_mesh_generated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< mve::TriangleMesh::Ptr(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AddinManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddinManager.data,
      qt_meta_data_AddinManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddinManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddinManager.stringdata0))
        return static_cast<void*>(const_cast< AddinManager*>(this));
    if (!strcmp(_clname, "ogl::CameraTrackballContext"))
        return static_cast< ogl::CameraTrackballContext*>(const_cast< AddinManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddinManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
