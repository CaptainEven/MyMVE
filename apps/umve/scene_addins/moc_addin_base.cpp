/****************************************************************************
** Meta object code from reading C++ file 'addin_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/scene_addins/addin_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddinBase_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinBase_t qt_meta_stringdata_AddinBase = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AddinBase"
QT_MOC_LITERAL(1, 10, 14), // "mesh_generated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "std::string"
QT_MOC_LITERAL(4, 38, 4), // "name"
QT_MOC_LITERAL(5, 43, 22), // "mve::TriangleMesh::Ptr"
QT_MOC_LITERAL(6, 66, 4), // "mesh"
QT_MOC_LITERAL(7, 71, 7), // "repaint"
QT_MOC_LITERAL(8, 79, 15) // "request_context"

    },
    "AddinBase\0mesh_generated\0\0std::string\0"
    "name\0mve::TriangleMesh::Ptr\0mesh\0"
    "repaint\0request_context"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   34,    2, 0x09 /* Protected */,
       8,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddinBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddinBase *_t = static_cast<AddinBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mesh_generated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< mve::TriangleMesh::Ptr(*)>(_a[2]))); break;
        case 1: _t->repaint(); break;
        case 2: _t->request_context(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddinBase::*_t)(std::string const & , mve::TriangleMesh::Ptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddinBase::mesh_generated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddinBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AddinBase.data,
      qt_meta_data_AddinBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddinBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddinBase.stringdata0))
        return static_cast<void*>(const_cast< AddinBase*>(this));
    if (!strcmp(_clname, "ogl::Context"))
        return static_cast< ogl::Context*>(const_cast< AddinBase*>(this));
    return QObject::qt_metacast(_clname);
}

int AddinBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AddinBase::mesh_generated(std::string const & _t1, mve::TriangleMesh::Ptr _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
