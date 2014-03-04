/****************************************************************************
** Meta object code from reading C++ file 'level2itm.h'
**
** Created: Sat Jan 12 18:32:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../level2itm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'level2itm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_level2itm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x0a,
      41,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_level2itm[] = {
    "level2itm\0\0semester3gpa()\0semester4gpa()\0"
    "currentgpa()\0"
};

const QMetaObject level2itm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_level2itm,
      qt_meta_data_level2itm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &level2itm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *level2itm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *level2itm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_level2itm))
        return static_cast<void*>(const_cast< level2itm*>(this));
    return QWidget::qt_metacast(_clname);
}

int level2itm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: semester3gpa(); break;
        case 1: semester4gpa(); break;
        case 2: currentgpa(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
