/****************************************************************************
** Meta object code from reading C++ file 'gestion_wael.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../new_agency/gestion_wael.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_wael.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestion_wael_t {
    QByteArrayData data[18];
    char stringdata0[498];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_wael_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_wael_t qt_meta_stringdata_gestion_wael = {
    {
QT_MOC_LITERAL(0, 0, 12), // "gestion_wael"
QT_MOC_LITERAL(1, 13, 33), // "on_actionadd_equipement_trigg..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 27), // "on_table_equipement_clicked"
QT_MOC_LITERAL(4, 76, 5), // "index"
QT_MOC_LITERAL(5, 82, 33), // "on_table_equipement_doubleCli..."
QT_MOC_LITERAL(6, 116, 36), // "on_actiondelete_equipement_tr..."
QT_MOC_LITERAL(7, 153, 41), // "on_equipement_sel_col_current..."
QT_MOC_LITERAL(8, 195, 4), // "arg1"
QT_MOC_LITERAL(9, 200, 30), // "on_rech_equipement_textChanged"
QT_MOC_LITERAL(10, 231, 34), // "on_actionadd_maintenance_trig..."
QT_MOC_LITERAL(11, 266, 28), // "on_table_maintenance_clicked"
QT_MOC_LITERAL(12, 295, 34), // "on_table_maintenance_doubleCl..."
QT_MOC_LITERAL(13, 330, 37), // "on_actiondelete_maintenance_t..."
QT_MOC_LITERAL(14, 368, 42), // "on_maintenance_sel_col_curren..."
QT_MOC_LITERAL(15, 411, 31), // "on_rech_maintenance_textChanged"
QT_MOC_LITERAL(16, 443, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(17, 467, 30) // "on_actiondeconnecter_triggered"

    },
    "gestion_wael\0on_actionadd_equipement_triggered\0"
    "\0on_table_equipement_clicked\0index\0"
    "on_table_equipement_doubleClicked\0"
    "on_actiondelete_equipement_triggered\0"
    "on_equipement_sel_col_currentIndexChanged\0"
    "arg1\0on_rech_equipement_textChanged\0"
    "on_actionadd_maintenance_triggered\0"
    "on_table_maintenance_clicked\0"
    "on_table_maintenance_doubleClicked\0"
    "on_actiondelete_maintenance_triggered\0"
    "on_maintenance_sel_col_currentIndexChanged\0"
    "on_rech_maintenance_textChanged\0"
    "on_pushButton_2_clicked\0"
    "on_actiondeconnecter_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion_wael[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      15,    1,  109,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestion_wael::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestion_wael *_t = static_cast<gestion_wael *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionadd_equipement_triggered(); break;
        case 1: _t->on_table_equipement_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_table_equipement_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_actiondelete_equipement_triggered(); break;
        case 4: _t->on_equipement_sel_col_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_rech_equipement_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_actionadd_maintenance_triggered(); break;
        case 7: _t->on_table_maintenance_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_table_maintenance_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_actiondelete_maintenance_triggered(); break;
        case 10: _t->on_maintenance_sel_col_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_rech_maintenance_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_actiondeconnecter_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject gestion_wael::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gestion_wael.data,
      qt_meta_data_gestion_wael,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestion_wael::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_wael::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestion_wael.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestion_wael::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
