/****************************************************************************
** Meta object code from reading C++ file 'cargparm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ia_busqueda/cargparm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cargparm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CargParm_t {
    const uint offsetsAndSize[28];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CargParm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CargParm_t qt_meta_stringdata_CargParm = {
    {
QT_MOC_LITERAL(0, 8), // "CargParm"
QT_MOC_LITERAL(9, 9), // "setCamino"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 14), // "QList<Casilla>"
QT_MOC_LITERAL(35, 5), // "camin"
QT_MOC_LITERAL(41, 4), // "show"
QT_MOC_LITERAL(46, 9), // "printMapa"
QT_MOC_LITERAL(56, 23), // "on_boton_cargar_clicked"
QT_MOC_LITERAL(80, 27), // "on_buscar_manhattan_clicked"
QT_MOC_LITERAL(108, 28), // "on_buscar_euclidiana_clicked"
QT_MOC_LITERAL(137, 16), // "on_close_clicked"
QT_MOC_LITERAL(154, 22), // "on_clear_boton_clicked"
QT_MOC_LITERAL(177, 23), // "on_aumentarMapa_clicked"
QT_MOC_LITERAL(201, 22) // "on_reducirMapa_clicked"

    },
    "CargParm\0setCamino\0\0QList<Casilla>\0"
    "camin\0show\0printMapa\0on_boton_cargar_clicked\0"
    "on_buscar_manhattan_clicked\0"
    "on_buscar_euclidiana_clicked\0"
    "on_close_clicked\0on_clear_boton_clicked\0"
    "on_aumentarMapa_clicked\0on_reducirMapa_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CargParm[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x08,    0 /* Private */,
       6,    0,   73,    2, 0x08,    3 /* Private */,
       7,    0,   74,    2, 0x08,    4 /* Private */,
       8,    0,   75,    2, 0x08,    5 /* Private */,
       9,    0,   76,    2, 0x08,    6 /* Private */,
      10,    0,   77,    2, 0x08,    7 /* Private */,
      11,    0,   78,    2, 0x08,    8 /* Private */,
      12,    0,   79,    2, 0x08,    9 /* Private */,
      13,    0,   80,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
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

void CargParm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CargParm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCamino((*reinterpret_cast< QList<Casilla>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->printMapa(); break;
        case 2: _t->on_boton_cargar_clicked(); break;
        case 3: _t->on_buscar_manhattan_clicked(); break;
        case 4: _t->on_buscar_euclidiana_clicked(); break;
        case 5: _t->on_close_clicked(); break;
        case 6: _t->on_clear_boton_clicked(); break;
        case 7: _t->on_aumentarMapa_clicked(); break;
        case 8: _t->on_reducirMapa_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CargParm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CargParm.offsetsAndSize,
    qt_meta_data_CargParm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CargParm_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<Casilla>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CargParm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CargParm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CargParm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CargParm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
