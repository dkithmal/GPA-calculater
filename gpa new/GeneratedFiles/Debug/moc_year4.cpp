/****************************************************************************
** Meta object code from reading C++ file 'year4.h'
**
** Created: Sat Jan 12 18:32:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../year4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'year4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_year4[] = {

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
       7,    6,    6,    6, 0x0a,
      22,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_year4[] = {
    "year4\0\0finalyeargpa()\0currentgpa()\0"
};

const QMetaObject year4::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_year4,
      qt_meta_data_year4, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &year4::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *year4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *year4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_year4))
        return static_cast<void*>(const_cast< year4*>(this));
    return QWidget::qt_metacast(_clname);
}

int year4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finalyeargpa(); break;
        case 1: currentgpa(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
