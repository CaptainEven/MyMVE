/****************************************************************************
** Meta object code from reading C++ file 'batchoperations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/umve/batchoperations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchoperations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BatchOperations_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchOperations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchOperations_t qt_meta_stringdata_BatchOperations = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BatchOperations"
QT_MOC_LITERAL(1, 16, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "BatchOperations\0on_close_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchOperations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BatchOperations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchOperations *_t = static_cast<BatchOperations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BatchOperations::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchOperations.data,
      qt_meta_data_BatchOperations,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchOperations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchOperations::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchOperations.stringdata0))
        return static_cast<void*>(const_cast< BatchOperations*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchOperations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BatchDelete_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchDelete_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchDelete_t qt_meta_stringdata_BatchDelete = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BatchDelete"
QT_MOC_LITERAL(1, 12, 16), // "on_batchdel_exec"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "BatchDelete\0on_batchdel_exec\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchDelete[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BatchDelete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchDelete *_t = static_cast<BatchDelete *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_batchdel_exec(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BatchDelete::staticMetaObject = {
    { &BatchOperations::staticMetaObject, qt_meta_stringdata_BatchDelete.data,
      qt_meta_data_BatchDelete,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchDelete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchDelete::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchDelete.stringdata0))
        return static_cast<void*>(const_cast< BatchDelete*>(this));
    return BatchOperations::qt_metacast(_clname);
}

int BatchDelete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchOperations::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BatchExport_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchExport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchExport_t qt_meta_stringdata_BatchExport = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BatchExport"
QT_MOC_LITERAL(1, 12, 14), // "on_export_exec"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12) // "on_dirselect"

    },
    "BatchExport\0on_export_exec\0\0on_dirselect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchExport[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BatchExport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchExport *_t = static_cast<BatchExport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_export_exec(); break;
        case 1: _t->on_dirselect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BatchExport::staticMetaObject = {
    { &BatchOperations::staticMetaObject, qt_meta_stringdata_BatchExport.data,
      qt_meta_data_BatchExport,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchExport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchExport::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchExport.stringdata0))
        return static_cast<void*>(const_cast< BatchExport*>(this));
    return BatchOperations::qt_metacast(_clname);
}

int BatchExport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchOperations::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BatchImportImages_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchImportImages_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchImportImages_t qt_meta_stringdata_BatchImportImages = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BatchImportImages"
QT_MOC_LITERAL(1, 18, 16), // "on_import_images"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "BatchImportImages\0on_import_images\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchImportImages[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BatchImportImages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchImportImages *_t = static_cast<BatchImportImages *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_import_images(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BatchImportImages::staticMetaObject = {
    { &BatchOperations::staticMetaObject, qt_meta_stringdata_BatchImportImages.data,
      qt_meta_data_BatchImportImages,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchImportImages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchImportImages::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchImportImages.stringdata0))
        return static_cast<void*>(const_cast< BatchImportImages*>(this));
    return BatchOperations::qt_metacast(_clname);
}

int BatchImportImages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchOperations::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BatchGenerateThumbs_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchGenerateThumbs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchGenerateThumbs_t qt_meta_stringdata_BatchGenerateThumbs = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BatchGenerateThumbs"
QT_MOC_LITERAL(1, 20, 11), // "on_generate"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "BatchGenerateThumbs\0on_generate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchGenerateThumbs[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BatchGenerateThumbs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchGenerateThumbs *_t = static_cast<BatchGenerateThumbs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_generate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BatchGenerateThumbs::staticMetaObject = {
    { &BatchOperations::staticMetaObject, qt_meta_stringdata_BatchGenerateThumbs.data,
      qt_meta_data_BatchGenerateThumbs,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchGenerateThumbs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchGenerateThumbs::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchGenerateThumbs.stringdata0))
        return static_cast<void*>(const_cast< BatchGenerateThumbs*>(this));
    return BatchOperations::qt_metacast(_clname);
}

int BatchGenerateThumbs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchOperations::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
