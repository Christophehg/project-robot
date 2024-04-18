/****************************************************************************
** Meta object code from reading C++ file 'application_robot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../application_robot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application_robot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Application_robot_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Application_robot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Application_robot_t qt_meta_stringdata_Application_robot = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Application_robot"
QT_MOC_LITERAL(1, 18, 7), // "refresh"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "onReadyRead"
QT_MOC_LITERAL(4, 39, 13), // "robot_avancer"
QT_MOC_LITERAL(5, 53, 13), // "robot_reculer"
QT_MOC_LITERAL(6, 67, 12), // "robot_droite"
QT_MOC_LITERAL(7, 80, 12), // "robot_gauche"
QT_MOC_LITERAL(8, 93, 11), // "camera_haut"
QT_MOC_LITERAL(9, 105, 10), // "camera_bas"
QT_MOC_LITERAL(10, 116, 13), // "camera_droite"
QT_MOC_LITERAL(11, 130, 13), // "camera_gauche"
QT_MOC_LITERAL(12, 144, 11), // "start_robot"
QT_MOC_LITERAL(13, 156, 9), // "connected"
QT_MOC_LITERAL(14, 166, 12) // "disconnected"

    },
    "Application_robot\0refresh\0\0onReadyRead\0"
    "robot_avancer\0robot_reculer\0robot_droite\0"
    "robot_gauche\0camera_haut\0camera_bas\0"
    "camera_droite\0camera_gauche\0start_robot\0"
    "connected\0disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Application_robot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Application_robot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application_robot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->onReadyRead(); break;
        case 2: _t->robot_avancer(); break;
        case 3: _t->robot_reculer(); break;
        case 4: _t->robot_droite(); break;
        case 5: _t->robot_gauche(); break;
        case 6: _t->camera_haut(); break;
        case 7: _t->camera_bas(); break;
        case 8: _t->camera_droite(); break;
        case 9: _t->camera_gauche(); break;
        case 10: _t->start_robot(); break;
        case 11: _t->connected(); break;
        case 12: _t->disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application_robot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application_robot::refresh)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Application_robot::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Application_robot.data,
    qt_meta_data_Application_robot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Application_robot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Application_robot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Application_robot.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Application_robot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Application_robot::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
