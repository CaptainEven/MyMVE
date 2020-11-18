/****************************************************************************
** Meta object code from reading C++ file 'addin_frusta_scene_renderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/scene_addins/addin_frusta_scene_renderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_frusta_scene_renderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddinFrustaSceneRenderer_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinFrustaSceneRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinFrustaSceneRenderer_t qt_meta_stringdata_AddinFrustaSceneRenderer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AddinFrustaSceneRenderer"
QT_MOC_LITERAL(1, 25, 22), // "reset_viewdir_renderer"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21) // "reset_frusta_renderer"

    },
    "AddinFrustaSceneRenderer\0"
    "reset_viewdir_renderer\0\0reset_frusta_renderer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinFrustaSceneRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddinFrustaSceneRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddinFrustaSceneRenderer *_t = static_cast<AddinFrustaSceneRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset_viewdir_renderer(); break;
        case 1: _t->reset_frusta_renderer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddinFrustaSceneRenderer::staticMetaObject = {
    { &AddinBase::staticMetaObject, qt_meta_stringdata_AddinFrustaSceneRenderer.data,
      qt_meta_data_AddinFrustaSceneRenderer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddinFrustaSceneRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinFrustaSceneRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddinFrustaSceneRenderer.stringdata0))
        return static_cast<void*>(const_cast< AddinFrustaSceneRenderer*>(this));
    return AddinBase::qt_metacast(_clname);
}

int AddinFrustaSceneRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddinBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
