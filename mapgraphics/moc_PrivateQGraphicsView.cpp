/****************************************************************************
** Meta object code from reading C++ file 'PrivateQGraphicsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "guts/PrivateQGraphicsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrivateQGraphicsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrivateQGraphicsView_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivateQGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivateQGraphicsView_t qt_meta_stringdata_PrivateQGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PrivateQGraphicsView"
QT_MOC_LITERAL(1, 21, 24), // "hadMouseDoubleClickEvent"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 60, 5), // "event"
QT_MOC_LITERAL(5, 66, 17), // "hadMouseMoveEvent"
QT_MOC_LITERAL(6, 84, 18), // "hadMousePressEvent"
QT_MOC_LITERAL(7, 103, 20), // "hadMouseReleaseEvent"
QT_MOC_LITERAL(8, 124, 19), // "hadContextMenuEvent"
QT_MOC_LITERAL(9, 144, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(10, 163, 13), // "hadWheelEvent"
QT_MOC_LITERAL(11, 177, 12) // "QWheelEvent*"

    },
    "PrivateQGraphicsView\0hadMouseDoubleClickEvent\0"
    "\0QMouseEvent*\0event\0hadMouseMoveEvent\0"
    "hadMousePressEvent\0hadMouseReleaseEvent\0"
    "hadContextMenuEvent\0QContextMenuEvent*\0"
    "hadWheelEvent\0QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivateQGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,
       8,    1,   56,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void PrivateQGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrivateQGraphicsView *_t = static_cast<PrivateQGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hadMouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->hadMouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->hadMousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->hadMouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->hadContextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 5: _t->hadWheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PrivateQGraphicsView::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadMouseDoubleClickEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PrivateQGraphicsView::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadMouseMoveEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PrivateQGraphicsView::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadMousePressEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PrivateQGraphicsView::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadMouseReleaseEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PrivateQGraphicsView::*)(QContextMenuEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadContextMenuEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PrivateQGraphicsView::*)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateQGraphicsView::hadWheelEvent)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrivateQGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_PrivateQGraphicsView.data,
      qt_meta_data_PrivateQGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrivateQGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivateQGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateQGraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int PrivateQGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void PrivateQGraphicsView::hadMouseDoubleClickEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrivateQGraphicsView::hadMouseMoveEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrivateQGraphicsView::hadMousePressEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrivateQGraphicsView::hadMouseReleaseEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrivateQGraphicsView::hadContextMenuEvent(QContextMenuEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrivateQGraphicsView::hadWheelEvent(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
