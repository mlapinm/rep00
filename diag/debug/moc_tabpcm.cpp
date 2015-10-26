/****************************************************************************
** Meta object code from reading C++ file 'tabpcm.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tabpcm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabpcm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabPcm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x09,
      26,    7,    7,    7, 0x09,
      47,    7,    7,    7, 0x09,
      68,    7,    7,    7, 0x09,
      89,    7,    7,    7, 0x09,
     109,    7,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabPcm[] = {
    "TabPcm\0\0slLiEdNameBoard()\0"
    "fLineEditIPInitial()\0fLineEditBasicPort()\0"
    "fLineEditPortBoard()\0fLineEditGradient()\0"
    "slRaBuPcmMetr()\0"
};

void TabPcm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabPcm *_t = static_cast<TabPcm *>(_o);
        switch (_id) {
        case 0: _t->slLiEdNameBoard(); break;
        case 1: _t->fLineEditIPInitial(); break;
        case 2: _t->fLineEditBasicPort(); break;
        case 3: _t->fLineEditPortBoard(); break;
        case 4: _t->fLineEditGradient(); break;
        case 5: _t->slRaBuPcmMetr(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabPcm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabPcm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabPcm,
      qt_meta_data_TabPcm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabPcm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabPcm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabPcm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabPcm))
        return static_cast<void*>(const_cast< TabPcm*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabPcm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
