/****************************************************************************
** Meta object code from reading C++ file 'viewinspect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/viewinspect/viewinspect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewinspect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewInspect_t {
    QByteArrayData data[30];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewInspect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewInspect_t qt_meta_stringdata_ViewInspect = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewInspect"
QT_MOC_LITERAL(1, 12, 7), // "on_open"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "on_zoom_in"
QT_MOC_LITERAL(4, 32, 11), // "on_zoom_out"
QT_MOC_LITERAL(5, 44, 14), // "on_normal_size"
QT_MOC_LITERAL(6, 59, 16), // "on_fit_to_window"
QT_MOC_LITERAL(7, 76, 18), // "on_details_toggled"
QT_MOC_LITERAL(8, 95, 21), // "on_embedding_selected"
QT_MOC_LITERAL(9, 117, 4), // "name"
QT_MOC_LITERAL(10, 122, 13), // "on_ply_export"
QT_MOC_LITERAL(11, 136, 15), // "on_image_export"
QT_MOC_LITERAL(12, 152, 17), // "on_copy_embedding"
QT_MOC_LITERAL(13, 170, 16), // "on_del_embedding"
QT_MOC_LITERAL(14, 187, 12), // "on_save_view"
QT_MOC_LITERAL(15, 200, 14), // "on_view_reload"
QT_MOC_LITERAL(16, 215, 20), // "on_reload_embeddings"
QT_MOC_LITERAL(17, 236, 16), // "on_image_clicked"
QT_MOC_LITERAL(18, 253, 1), // "x"
QT_MOC_LITERAL(19, 255, 1), // "y"
QT_MOC_LITERAL(20, 257, 12), // "QMouseEvent*"
QT_MOC_LITERAL(21, 270, 5), // "event"
QT_MOC_LITERAL(22, 276, 23), // "on_tone_mapping_changed"
QT_MOC_LITERAL(23, 300, 17), // "on_scene_selected"
QT_MOC_LITERAL(24, 318, 15), // "mve::Scene::Ptr"
QT_MOC_LITERAL(25, 334, 5), // "scene"
QT_MOC_LITERAL(26, 340, 16), // "on_view_selected"
QT_MOC_LITERAL(27, 357, 14), // "mve::View::Ptr"
QT_MOC_LITERAL(28, 372, 4), // "view"
QT_MOC_LITERAL(29, 377, 16) // "on_tab_activated"

    },
    "ViewInspect\0on_open\0\0on_zoom_in\0"
    "on_zoom_out\0on_normal_size\0on_fit_to_window\0"
    "on_details_toggled\0on_embedding_selected\0"
    "name\0on_ply_export\0on_image_export\0"
    "on_copy_embedding\0on_del_embedding\0"
    "on_save_view\0on_view_reload\0"
    "on_reload_embeddings\0on_image_clicked\0"
    "x\0y\0QMouseEvent*\0event\0on_tone_mapping_changed\0"
    "on_scene_selected\0mve::Scene::Ptr\0"
    "scene\0on_view_selected\0mve::View::Ptr\0"
    "view\0on_tab_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewInspect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    1,  115,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    3,  125,    2, 0x08 /* Private */,
      22,    0,  132,    2, 0x08 /* Private */,
      23,    1,  133,    2, 0x08 /* Private */,
      26,    1,  136,    2, 0x08 /* Private */,
      29,    0,  139,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 20,   18,   19,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,

       0        // eod
};

void ViewInspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewInspect *_t = static_cast<ViewInspect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_open(); break;
        case 1: _t->on_zoom_in(); break;
        case 2: _t->on_zoom_out(); break;
        case 3: _t->on_normal_size(); break;
        case 4: _t->on_fit_to_window(); break;
        case 5: _t->on_details_toggled(); break;
        case 6: _t->on_embedding_selected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_ply_export(); break;
        case 8: _t->on_image_export(); break;
        case 9: _t->on_copy_embedding(); break;
        case 10: _t->on_del_embedding(); break;
        case 11: _t->on_save_view(); break;
        case 12: _t->on_view_reload(); break;
        case 13: _t->on_reload_embeddings(); break;
        case 14: _t->on_image_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 15: _t->on_tone_mapping_changed(); break;
        case 16: _t->on_scene_selected((*reinterpret_cast< mve::Scene::Ptr(*)>(_a[1]))); break;
        case 17: _t->on_view_selected((*reinterpret_cast< mve::View::Ptr(*)>(_a[1]))); break;
        case 18: _t->on_tab_activated(); break;
        default: ;
        }
    }
}

const QMetaObject ViewInspect::staticMetaObject = {
    { &MainWindowTab::staticMetaObject, qt_meta_stringdata_ViewInspect.data,
      qt_meta_data_ViewInspect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewInspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewInspect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewInspect.stringdata0))
        return static_cast<void*>(const_cast< ViewInspect*>(this));
    return MainWindowTab::qt_metacast(_clname);
}

int ViewInspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindowTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
