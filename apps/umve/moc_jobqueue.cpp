/****************************************************************************
** Meta object code from reading C++ file 'jobqueue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/umve/jobqueue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jobqueue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JobQueue_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JobQueue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JobQueue_t qt_meta_stringdata_JobQueue = {
    {
QT_MOC_LITERAL(0, 0, 8), // "JobQueue"
QT_MOC_LITERAL(1, 9, 9), // "on_update"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "on_item_activated"
QT_MOC_LITERAL(4, 38, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 55, 4), // "item"
QT_MOC_LITERAL(6, 60, 12), // "add_fake_job"
QT_MOC_LITERAL(7, 73, 10), // "update_job"
QT_MOC_LITERAL(8, 84, 14), // "JobQueueEntry&"
QT_MOC_LITERAL(9, 99, 3) // "job"

    },
    "JobQueue\0on_update\0\0on_item_activated\0"
    "QListWidgetItem*\0item\0add_fake_job\0"
    "update_job\0JobQueueEntry&\0job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JobQueue[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    1,   35,    2, 0x09 /* Protected */,
       6,    0,   38,    2, 0x09 /* Protected */,
       7,    1,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void JobQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JobQueue *_t = static_cast<JobQueue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_update(); break;
        case 1: _t->on_item_activated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->add_fake_job(); break;
        case 3: _t->update_job((*reinterpret_cast< JobQueueEntry(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject JobQueue::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JobQueue.data,
      qt_meta_data_JobQueue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JobQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JobQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JobQueue.stringdata0))
        return static_cast<void*>(const_cast< JobQueue*>(this));
    return QWidget::qt_metacast(_clname);
}

int JobQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
