/****************************************************************************
** Meta object code from reading C++ file 'guihelpers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/umve/guihelpers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guihelpers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCollapsible_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCollapsible_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCollapsible_t qt_meta_stringdata_QCollapsible = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QCollapsible"
QT_MOC_LITERAL(1, 13, 18), // "on_toggle_collapse"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "QCollapsible\0on_toggle_collapse\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCollapsible[] = {

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

void QCollapsible::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCollapsible *_t = static_cast<QCollapsible *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toggle_collapse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCollapsible::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCollapsible.data,
      qt_meta_data_QCollapsible,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCollapsible::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCollapsible::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCollapsible.stringdata0))
        return static_cast<void*>(const_cast< QCollapsible*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCollapsible::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FileSelector_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSelector_t qt_meta_stringdata_FileSelector = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileSelector"
QT_MOC_LITERAL(1, 13, 10), // "on_clicked"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "FileSelector\0on_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSelector[] = {

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

void FileSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSelector *_t = static_cast<FileSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileSelector::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_FileSelector.data,
      qt_meta_data_FileSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileSelector.stringdata0))
        return static_cast<void*>(const_cast< FileSelector*>(this));
    return QPushButton::qt_metacast(_clname);
}

int FileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
