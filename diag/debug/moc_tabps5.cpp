/****************************************************************************
** Meta object code from reading C++ file 'tabps5.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tabps5.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabps5.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabPs5[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x09,
      29,    7,    7,    7, 0x09,
      50,    7,    7,    7, 0x09,
      71,    7,    7,    7, 0x09,
      91,    7,    7,    7, 0x09,
     111,    7,    7,    7, 0x09,
     133,    7,    7,    7, 0x09,
     154,    7,    7,    7, 0x09,
     175,    7,    7,    7, 0x09,
     191,    7,    7,    7, 0x09,
     221,    7,    7,    7, 0x09,
     250,    7,    7,    7, 0x09,
     263,    7,    7,    7, 0x09,
     280,    7,    7,    7, 0x09,
     297,    7,    7,    7, 0x09,
     310,    7,    7,    7, 0x09,
     323,    7,    7,    7, 0x09,
     338,    7,    7,    7, 0x09,
     353,    7,    7,    7, 0x09,
     367,    7,    7,    7, 0x09,
     382,    7,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabPs5[] = {
    "TabPs5\0\0fLineEditIPInitial()\0"
    "fLineEditBasicPort()\0fLineEditPortBoard()\0"
    "fLineEditGradient()\0slLiEdFuNameBoard()\0"
    "slLiEdCourseLanding()\0slChBoComplectAuto()\0"
    "slLiEdMaxTimeBlock()\0slLiEdNameRls()\0"
    "slLiEdPointStandingDistance()\0"
    "slLiEdPointStandingAzimuth()\0slRaBuGrad()\0"
    "slLiEdTorNulN1()\0slLiEdTorNulN2()\0"
    "slLiEdPnt1()\0slLiEdPnt2()\0slLiEdHiVpp1()\0"
    "slLiEdHiVpp2()\0slLiEdAxVpp()\0"
    "slLiEdGlAmpl()\0slLiEdCourseAmpl()\0"
};

void TabPs5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabPs5 *_t = static_cast<TabPs5 *>(_o);
        switch (_id) {
        case 0: _t->fLineEditIPInitial(); break;
        case 1: _t->fLineEditBasicPort(); break;
        case 2: _t->fLineEditPortBoard(); break;
        case 3: _t->fLineEditGradient(); break;
        case 4: _t->slLiEdFuNameBoard(); break;
        case 5: _t->slLiEdCourseLanding(); break;
        case 6: _t->slChBoComplectAuto(); break;
        case 7: _t->slLiEdMaxTimeBlock(); break;
        case 8: _t->slLiEdNameRls(); break;
        case 9: _t->slLiEdPointStandingDistance(); break;
        case 10: _t->slLiEdPointStandingAzimuth(); break;
        case 11: _t->slRaBuGrad(); break;
        case 12: _t->slLiEdTorNulN1(); break;
        case 13: _t->slLiEdTorNulN2(); break;
        case 14: _t->slLiEdPnt1(); break;
        case 15: _t->slLiEdPnt2(); break;
        case 16: _t->slLiEdHiVpp1(); break;
        case 17: _t->slLiEdHiVpp2(); break;
        case 18: _t->slLiEdAxVpp(); break;
        case 19: _t->slLiEdGlAmpl(); break;
        case 20: _t->slLiEdCourseAmpl(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabPs5::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabPs5::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabPs5,
      qt_meta_data_TabPs5, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabPs5::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabPs5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabPs5::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabPs5))
        return static_cast<void*>(const_cast< TabPs5*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabPs5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
