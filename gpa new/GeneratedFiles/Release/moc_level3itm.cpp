/****************************************************************************
** Meta object code from reading C++ file 'level3itm.h'
**
** Created: Sun Jan 13 19:31:41 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../level3itm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'level3itm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_level3itm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_level3itm[] = {
    "level3itm\0\0semester5gpa()\0currentgpa()\0"
};

const QMetaObject level3itm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_level3itm,
      qt_meta_data_level3itm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &level3itm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *level3itm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *level3itm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_level3itm))
        return static_cast<void*>(const_cast< level3itm*>(this));
    return QWidget::qt_metacast(_clname);
}

int level3itm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: semester5gpa(); break;
        case 1: currentgpa(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
