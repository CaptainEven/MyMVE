/****************************************************************************
** Meta object code from reading C++ file 'tonemapping.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../apps/umve/viewinspect/tonemapping.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tonemapping.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToneMappingHistogram_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToneMappingHistogram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToneMappingHistogram_t qt_meta_stringdata_ToneMappingHistogram = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToneMappingHistogram"
QT_MOC_LITERAL(1, 21, 20), // "mapping_area_changed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "start"
QT_MOC_LITERAL(4, 49, 3), // "end"
QT_MOC_LITERAL(5, 53, 16) // "on_timer_expired"

    },
    "ToneMappingHistogram\0mapping_area_changed\0"
    "\0start\0end\0on_timer_expired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToneMappingHistogram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ToneMappingHistogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToneMappingHistogram *_t = static_cast<ToneMappingHistogram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapping_area_changed((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->on_timer_expired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToneMappingHistogram::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToneMappingHistogram::mapping_area_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ToneMappingHistogram::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ToneMappingHistogram.data,
      qt_meta_data_ToneMappingHistogram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToneMappingHistogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToneMappingHistogram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToneMappingHistogram.stringdata0))
        return static_cast<void*>(const_cast< ToneMappingHistogram*>(this));
    return QWidget::qt_metacast(_clname);
}

int ToneMappingHistogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ToneMappingHistogram::mapping_area_changed(float _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ToneMapping_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToneMapping_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToneMapping_t qt_meta_stringdata_ToneMapping = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ToneMapping"
QT_MOC_LITERAL(1, 12, 20), // "tone_mapping_changed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "on_gamma_value_changed"
QT_MOC_LITERAL(4, 57, 26), // "on_highlight_value_changed"
QT_MOC_LITERAL(5, 84, 23), // "on_mapping_area_changed"
QT_MOC_LITERAL(6, 108, 5), // "start"
QT_MOC_LITERAL(7, 114, 3), // "end"
QT_MOC_LITERAL(8, 118, 19), // "on_channels_changed"
QT_MOC_LITERAL(9, 138, 4), // "mask"
QT_MOC_LITERAL(10, 143, 22), // "on_update_tone_mapping"
QT_MOC_LITERAL(11, 166, 24) // "on_ignore_zeroes_changed"

    },
    "ToneMapping\0tone_mapping_changed\0\0"
    "on_gamma_value_changed\0"
    "on_highlight_value_changed\0"
    "on_mapping_area_changed\0start\0end\0"
    "on_channels_changed\0mask\0"
    "on_update_tone_mapping\0on_ignore_zeroes_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToneMapping[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    2,   52,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToneMapping::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToneMapping *_t = static_cast<ToneMapping *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tone_mapping_changed(); break;
        case 1: _t->on_gamma_value_changed(); break;
        case 2: _t->on_highlight_value_changed(); break;
        case 3: _t->on_mapping_area_changed((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->on_channels_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_update_tone_mapping(); break;
        case 6: _t->on_ignore_zeroes_changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToneMapping::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToneMapping::tone_mapping_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ToneMapping::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ToneMapping.data,
      qt_meta_data_ToneMapping,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToneMapping::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToneMapping::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToneMapping.stringdata0))
        return static_cast<void*>(const_cast< ToneMapping*>(this));
    return QWidget::qt_metacast(_clname);
}

int ToneMapping::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ToneMapping::tone_mapping_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
