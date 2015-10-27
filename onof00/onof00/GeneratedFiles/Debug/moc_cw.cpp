/****************************************************************************
** Meta object code from reading C++ file 'cw.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CW[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    4,    3,    3, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    3,    3,    3, 0x0a,
      33,    3,    3,    3, 0x0a,
      42,    3,    3,    3, 0x0a,
      50,    3,    3,    3, 0x0a,
      59,    3,    3,    3, 0x0a,
      85,    3,    3,    3, 0x0a,
     102,  100,    3,    3, 0x0a,
     119,  100,    3,    3, 0x0a,
     135,    3,    3,    3, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CW[] = {
    "CW\0\0str\0sgToHead(QString)\0open()\0"
    "slSave()\0slSet()\0slCopy()\0"
    "processPendingDatagrams()\0sendDatagram()\0"
    "b\0slActWrite(bool)\0slActEcho(bool)\0"
    "slSiTimer()\0"
};

void CW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CW *_t = static_cast<CW *>(_o);
        switch (_id) {
        case 0: _t->sgToHead((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->open(); break;
        case 2: _t->slSave(); break;
        case 3: _t->slSet(); break;
        case 4: _t->slCopy(); break;
        case 5: _t->processPendingDatagrams(); break;
        case 6: _t->sendDatagram(); break;
        case 7: _t->slActWrite((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slActEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slSiTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CW::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CW,
      qt_meta_data_CW, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CW))
        return static_cast<void*>(const_cast< CW*>(this));
    return QWidget::qt_metacast(_clname);
}

int CW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CW::sgToHead(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
