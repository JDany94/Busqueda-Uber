/****************************************************************************
** Meta object code from reading C++ file 'ingrparm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ia_busqueda/ingrparm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ingrparm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IngrParm_t {
    const uint offsetsAndSize[36];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_IngrParm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_IngrParm_t qt_meta_stringdata_IngrParm = {
    {
QT_MOC_LITERAL(0, 8), // "IngrParm"
QT_MOC_LITERAL(9, 32), // "on_generar_entorno_boton_clicked"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 9), // "printMapa"
QT_MOC_LITERAL(53, 16), // "llenarObstaculos"
QT_MOC_LITERAL(70, 9), // "setCamino"
QT_MOC_LITERAL(80, 14), // "QList<Casilla>"
QT_MOC_LITERAL(95, 5), // "camin"
QT_MOC_LITERAL(101, 4), // "show"
QT_MOC_LITERAL(106, 22), // "on_clear_boton_clicked"
QT_MOC_LITERAL(129, 21), // "on_buscar_man_clicked"
QT_MOC_LITERAL(151, 22), // "on_buscar_eucl_clicked"
QT_MOC_LITERAL(174, 21), // "on_save_boton_clicked"
QT_MOC_LITERAL(196, 23), // "on_aumentarMapa_clicked"
QT_MOC_LITERAL(220, 22), // "on_reducirMapa_clicked"
QT_MOC_LITERAL(243, 21), // "on_obst_boton_clicked"
QT_MOC_LITERAL(265, 28), // "on_quitar_obst_boton_clicked"
QT_MOC_LITERAL(294, 16) // "on_close_clicked"

    },
    "IngrParm\0on_generar_entorno_boton_clicked\0"
    "\0printMapa\0llenarObstaculos\0setCamino\0"
    "QList<Casilla>\0camin\0show\0"
    "on_clear_boton_clicked\0on_buscar_man_clicked\0"
    "on_buscar_eucl_clicked\0on_save_boton_clicked\0"
    "on_aumentarMapa_clicked\0on_reducirMapa_clicked\0"
    "on_obst_boton_clicked\0"
    "on_quitar_obst_boton_clicked\0"
    "on_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IngrParm[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    0 /* Private */,
       3,    0,   93,    2, 0x08,    1 /* Private */,
       4,    0,   94,    2, 0x08,    2 /* Private */,
       5,    2,   95,    2, 0x08,    3 /* Private */,
       9,    0,  100,    2, 0x08,    6 /* Private */,
      10,    0,  101,    2, 0x08,    7 /* Private */,
      11,    0,  102,    2, 0x08,    8 /* Private */,
      12,    0,  103,    2, 0x08,    9 /* Private */,
      13,    0,  104,    2, 0x08,   10 /* Private */,
      14,    0,  105,    2, 0x08,   11 /* Private */,
      15,    0,  106,    2, 0x08,   12 /* Private */,
      16,    0,  107,    2, 0x08,   13 /* Private */,
      17,    0,  108,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    8,
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

void IngrParm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IngrParm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_generar_entorno_boton_clicked(); break;
        case 1: _t->printMapa(); break;
        case 2: _t->llenarObstaculos(); break;
        case 3: _t->setCamino((*reinterpret_cast< QList<Casilla>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->on_clear_boton_clicked(); break;
        case 5: _t->on_buscar_man_clicked(); break;
        case 6: _t->on_buscar_eucl_clicked(); break;
        case 7: _t->on_save_boton_clicked(); break;
        case 8: _t->on_aumentarMapa_clicked(); break;
        case 9: _t->on_reducirMapa_clicked(); break;
        case 10: _t->on_obst_boton_clicked(); break;
        case 11: _t->on_quitar_obst_boton_clicked(); break;
        case 12: _t->on_close_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject IngrParm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_IngrParm.offsetsAndSize,
    qt_meta_data_IngrParm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_IngrParm_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<Casilla>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *IngrParm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IngrParm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IngrParm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int IngrParm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
