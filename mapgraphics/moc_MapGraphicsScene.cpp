/****************************************************************************
** Meta object code from reading C++ file 'MapGraphicsScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphicsScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapGraphicsScene_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapGraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapGraphicsScene_t qt_meta_stringdata_MapGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MapGraphicsScene"
QT_MOC_LITERAL(1, 17, 11), // "objectAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "MapGraphicsObject*"
QT_MOC_LITERAL(4, 49, 13), // "objectRemoved"
QT_MOC_LITERAL(5, 63, 24), // "handleNewObjectGenerated"
QT_MOC_LITERAL(6, 88, 9), // "newObject"
QT_MOC_LITERAL(7, 98, 21), // "handleObjectDestroyed"
QT_MOC_LITERAL(8, 120, 6) // "object"

    },
    "MapGraphicsScene\0objectAdded\0\0"
    "MapGraphicsObject*\0objectRemoved\0"
    "handleNewObjectGenerated\0newObject\0"
    "handleObjectDestroyed\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapGraphicsScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x08 /* Private */,
       7,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,

       0        // eod
};

void MapGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapGraphicsScene *_t = static_cast<MapGraphicsScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectAdded((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 1: _t->objectRemoved((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 2: _t->handleNewObjectGenerated((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 3: _t->handleObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapGraphicsObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapGraphicsObject* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapGraphicsObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapGraphicsScene::*)(MapGraphicsObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicsScene::objectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapGraphicsScene::*)(MapGraphicsObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicsScene::objectRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapGraphicsScene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapGraphicsScene.data,
      qt_meta_data_MapGraphicsScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MapGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MapGraphicsScene::objectAdded(MapGraphicsObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapGraphicsScene::objectRemoved(MapGraphicsObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
