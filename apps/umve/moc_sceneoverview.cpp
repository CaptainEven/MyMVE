/****************************************************************************
** Meta object code from reading C++ file 'sceneoverview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/umve/sceneoverview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sceneoverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SceneOverview_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneOverview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneOverview_t qt_meta_stringdata_SceneOverview = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SceneOverview"
QT_MOC_LITERAL(1, 14, 16), // "on_scene_changed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "mve::Scene::Ptr"
QT_MOC_LITERAL(4, 48, 5), // "scene"
QT_MOC_LITERAL(5, 54, 14), // "on_row_changed"
QT_MOC_LITERAL(6, 69, 2), // "id"
QT_MOC_LITERAL(7, 72, 17), // "on_filter_changed"
QT_MOC_LITERAL(8, 90, 15) // "on_clear_filter"

    },
    "SceneOverview\0on_scene_changed\0\0"
    "mve::Scene::Ptr\0scene\0on_row_changed\0"
    "id\0on_filter_changed\0on_clear_filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneOverview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       5,    1,   37,    2, 0x09 /* Protected */,
       7,    0,   40,    2, 0x09 /* Protected */,
       8,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SceneOverview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SceneOverview *_t = static_cast<SceneOverview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_scene_changed((*reinterpret_cast< mve::Scene::Ptr(*)>(_a[1]))); break;
        case 1: _t->on_row_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_filter_changed(); break;
        case 3: _t->on_clear_filter(); break;
        default: ;
        }
    }
}

const QMetaObject SceneOverview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SceneOverview.data,
      qt_meta_data_SceneOverview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SceneOverview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SceneOverview.stringdata0))
        return static_cast<void*>(const_cast< SceneOverview*>(this));
    return QWidget::qt_metacast(_clname);
}

int SceneOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
