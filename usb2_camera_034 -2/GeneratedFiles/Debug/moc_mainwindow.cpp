/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[33];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "openCamera"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "closeCamera"
QT_MOC_LITERAL(4, 35, 11), // "pauseCamera"
QT_MOC_LITERAL(5, 47, 11), // "updateImage"
QT_MOC_LITERAL(6, 59, 5), // "image"
QT_MOC_LITERAL(7, 65, 13), // "showFrameRate"
QT_MOC_LITERAL(8, 79, 8), // "saveData"
QT_MOC_LITERAL(9, 88, 18), // "countReceiveFrames"
QT_MOC_LITERAL(10, 107, 26), // "changeWidthTo8bitsPerPixel"
QT_MOC_LITERAL(11, 134, 4), // "flag"
QT_MOC_LITERAL(12, 139, 18), // "changeImageToColor"
QT_MOC_LITERAL(13, 158, 16), // "switchResolution"
QT_MOC_LITERAL(14, 175, 5), // "index"
QT_MOC_LITERAL(15, 181, 13), // "setAnalogGain"
QT_MOC_LITERAL(16, 195, 10), // "setRedGain"
QT_MOC_LITERAL(17, 206, 4), // "gain"
QT_MOC_LITERAL(18, 211, 12), // "setGreenGain"
QT_MOC_LITERAL(19, 224, 11), // "setBlueGain"
QT_MOC_LITERAL(20, 236, 13), // "setGlobalGain"
QT_MOC_LITERAL(21, 250, 15), // "setExposureMode"
QT_MOC_LITERAL(22, 266, 6), // "isAuto"
QT_MOC_LITERAL(23, 273, 16), // "setExposureValue"
QT_MOC_LITERAL(24, 290, 5), // "value"
QT_MOC_LITERAL(25, 296, 16), // "chooseSavingPath"
QT_MOC_LITERAL(26, 313, 9), // "takeImage"
QT_MOC_LITERAL(27, 323, 9), // "showCurve"
QT_MOC_LITERAL(28, 333, 9), // "openImage"
QT_MOC_LITERAL(29, 343, 17), // "setHorizontalLine"
QT_MOC_LITERAL(30, 361, 15), // "setVerticalLine"
QT_MOC_LITERAL(31, 377, 16), // "setInputDataLine"
QT_MOC_LITERAL(32, 394, 17) // "configMyGraphPlot"

    },
    "MainWindow\0openCamera\0\0closeCamera\0"
    "pauseCamera\0updateImage\0image\0"
    "showFrameRate\0saveData\0countReceiveFrames\0"
    "changeWidthTo8bitsPerPixel\0flag\0"
    "changeImageToColor\0switchResolution\0"
    "index\0setAnalogGain\0setRedGain\0gain\0"
    "setGreenGain\0setBlueGain\0setGlobalGain\0"
    "setExposureMode\0isAuto\0setExposureValue\0"
    "value\0chooseSavingPath\0takeImage\0"
    "showCurve\0openImage\0setHorizontalLine\0"
    "setVerticalLine\0setInputDataLine\0"
    "configMyGraphPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x0a /* Public */,
       3,    0,  140,    2, 0x0a /* Public */,
       4,    0,  141,    2, 0x0a /* Public */,
       5,    1,  142,    2, 0x0a /* Public */,
       7,    0,  145,    2, 0x0a /* Public */,
       8,    0,  146,    2, 0x0a /* Public */,
       9,    0,  147,    2, 0x0a /* Public */,
      10,    1,  148,    2, 0x0a /* Public */,
      12,    1,  151,    2, 0x0a /* Public */,
      13,    1,  154,    2, 0x0a /* Public */,
      15,    1,  157,    2, 0x0a /* Public */,
      16,    1,  160,    2, 0x0a /* Public */,
      18,    1,  163,    2, 0x0a /* Public */,
      19,    1,  166,    2, 0x0a /* Public */,
      20,    1,  169,    2, 0x0a /* Public */,
      21,    1,  172,    2, 0x0a /* Public */,
      23,    1,  175,    2, 0x0a /* Public */,
      25,    0,  178,    2, 0x0a /* Public */,
      26,    0,  179,    2, 0x0a /* Public */,
      27,    0,  180,    2, 0x0a /* Public */,
      28,    0,  181,    2, 0x0a /* Public */,
      29,    0,  182,    2, 0x0a /* Public */,
      30,    0,  183,    2, 0x0a /* Public */,
      31,    0,  184,    2, 0x0a /* Public */,
      32,    0,  185,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openCamera(); break;
        case 1: _t->closeCamera(); break;
        case 2: _t->pauseCamera(); break;
        case 3: _t->updateImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 4: _t->showFrameRate(); break;
        case 5: _t->saveData(); break;
        case 6: _t->countReceiveFrames(); break;
        case 7: _t->changeWidthTo8bitsPerPixel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->changeImageToColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->switchResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setAnalogGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setRedGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setGreenGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setBlueGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setGlobalGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setExposureMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setExposureValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->chooseSavingPath(); break;
        case 18: _t->takeImage(); break;
        case 19: _t->showCurve(); break;
        case 20: _t->openImage(); break;
        case 21: _t->setHorizontalLine(); break;
        case 22: _t->setVerticalLine(); break;
        case 23: _t->setInputDataLine(); break;
        case 24: _t->configMyGraphPlot(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
