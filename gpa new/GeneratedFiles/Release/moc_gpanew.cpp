/****************************************************************************
** Meta object code from reading C++ file 'gpanew.h'
**
** Created: Sun Jan 13 19:31:42 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gpanew.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpanew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gpanew[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      17,    7,    7,    7, 0x0a,
      29,    7,    7,    7, 0x0a,
      42,    7,    7,    7, 0x0a,
      54,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gpanew[] = {
    "gpanew\0\0course()\0firstyear()\0secondyear()\0"
    "thirdyear()\0forthyear()\0"
};

const QMetaObject gpanew::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gpanew,
      qt_meta_data_gpanew, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gpanew::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gpanew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gpanew::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpanew))
        return static_cast<void*>(const_cast< gpanew*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gpanew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: course(); break;
        case 1: firstyear(); break;
        case 2: secondyear(); break;
        case 3: thirdyear(); break;
        case 4: forthyear(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
