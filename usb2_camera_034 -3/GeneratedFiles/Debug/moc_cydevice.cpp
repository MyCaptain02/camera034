/****************************************************************************
** Meta object code from reading C++ file 'cydevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/cydevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cydevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CyDevice_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CyDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CyDevice_t qt_meta_stringdata_CyDevice = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CyDevice"
QT_MOC_LITERAL(1, 9, 25), // "completeFrameTransmission"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "receiveData"
QT_MOC_LITERAL(4, 48, 16), // "changeResolution"
QT_MOC_LITERAL(5, 65, 5), // "width"
QT_MOC_LITERAL(6, 71, 6), // "height"
QT_MOC_LITERAL(7, 78, 3), // "req"
QT_MOC_LITERAL(8, 82, 11), // "sizePerXfer"
QT_MOC_LITERAL(9, 94, 13), // "xferQueueSize"
QT_MOC_LITERAL(10, 108, 7) // "timeOut"

    },
    "CyDevice\0completeFrameTransmission\0\0"
    "receiveData\0changeResolution\0width\0"
    "height\0req\0sizePerXfer\0xferQueueSize\0"
    "timeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CyDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    6,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,    9,   10,

       0        // eod
};

void CyDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CyDevice *_t = static_cast<CyDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completeFrameTransmission(); break;
        case 1: _t->receiveData(); break;
        case 2: _t->changeResolution((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CyDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CyDevice::completeFrameTransmission)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CyDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CyDevice.data,
      qt_meta_data_CyDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CyDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CyDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CyDevice.stringdata0))
        return static_cast<void*>(const_cast< CyDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int CyDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CyDevice::completeFrameTransmission()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
