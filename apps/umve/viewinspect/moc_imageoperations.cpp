/****************************************************************************
** Meta object code from reading C++ file 'imageoperations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/viewinspect/imageoperations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageoperations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageOperationsWidget_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageOperationsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageOperationsWidget_t qt_meta_stringdata_ImageOperationsWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ImageOperationsWidget"
QT_MOC_LITERAL(1, 22, 24), // "signal_reload_embeddings"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 23), // "signal_select_embedding"
QT_MOC_LITERAL(4, 72, 4), // "name"
QT_MOC_LITERAL(5, 77, 12), // "exec_dmrecon"
QT_MOC_LITERAL(6, 90, 12), // "exec_dmclean"
QT_MOC_LITERAL(7, 103, 18), // "exec_dmrecon_batch"
QT_MOC_LITERAL(8, 122, 16), // "on_view_selected"
QT_MOC_LITERAL(9, 139, 14), // "mve::View::Ptr"
QT_MOC_LITERAL(10, 154, 4) // "view"

    },
    "ImageOperationsWidget\0signal_reload_embeddings\0"
    "\0signal_select_embedding\0name\0"
    "exec_dmrecon\0exec_dmclean\0exec_dmrecon_batch\0"
    "on_view_selected\0mve::View::Ptr\0view"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageOperationsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void ImageOperationsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageOperationsWidget *_t = static_cast<ImageOperationsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_reload_embeddings(); break;
        case 1: _t->signal_select_embedding((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->exec_dmrecon(); break;
        case 3: _t->exec_dmclean(); break;
        case 4: _t->exec_dmrecon_batch(); break;
        case 5: _t->on_view_selected((*reinterpret_cast< mve::View::Ptr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageOperationsWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageOperationsWidget::signal_reload_embeddings)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ImageOperationsWidget::*_t)(QString const & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageOperationsWidget::signal_select_embedding)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ImageOperationsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageOperationsWidget.data,
      qt_meta_data_ImageOperationsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageOperationsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageOperationsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageOperationsWidget.stringdata0))
        return static_cast<void*>(const_cast< ImageOperationsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageOperationsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ImageOperationsWidget::signal_reload_embeddings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ImageOperationsWidget::signal_select_embedding(QString const & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
