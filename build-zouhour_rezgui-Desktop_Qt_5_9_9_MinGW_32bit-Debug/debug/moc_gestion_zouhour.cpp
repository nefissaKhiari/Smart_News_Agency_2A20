/****************************************************************************
** Meta object code from reading C++ file 'gestion_zouhour.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zouhour_rezgui/gestion_zouhour.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_zouhour.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestion_zouhour_t {
    QByteArrayData data[17];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_zouhour_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_zouhour_t qt_meta_stringdata_gestion_zouhour = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gestion_zouhour"
QT_MOC_LITERAL(1, 16, 23), // "on_rech_emp_textChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "arg1"
QT_MOC_LITERAL(4, 46, 29), // "on_actiondelete_emp_triggered"
QT_MOC_LITERAL(5, 76, 26), // "on_actionadd_emp_triggered"
QT_MOC_LITERAL(6, 103, 34), // "on_emp_sel_col_currentIndexCh..."
QT_MOC_LITERAL(7, 138, 5), // "index"
QT_MOC_LITERAL(8, 144, 20), // "on_table_emp_clicked"
QT_MOC_LITERAL(9, 165, 26), // "on_table_emp_doubleClicked"
QT_MOC_LITERAL(10, 192, 30), // "on_table_mission_doubleClicked"
QT_MOC_LITERAL(11, 223, 24), // "on_table_mission_clicked"
QT_MOC_LITERAL(12, 248, 38), // "on_mission_sel_col_currentInd..."
QT_MOC_LITERAL(13, 287, 27), // "on_rech_mission_textChanged"
QT_MOC_LITERAL(14, 315, 30), // "on_actionadd_mission_triggered"
QT_MOC_LITERAL(15, 346, 33), // "on_actiondelete_mission_trigg..."
QT_MOC_LITERAL(16, 380, 19) // "on_stat_emp_clicked"

    },
    "gestion_zouhour\0on_rech_emp_textChanged\0"
    "\0arg1\0on_actiondelete_emp_triggered\0"
    "on_actionadd_emp_triggered\0"
    "on_emp_sel_col_currentIndexChanged\0"
    "index\0on_table_emp_clicked\0"
    "on_table_emp_doubleClicked\0"
    "on_table_mission_doubleClicked\0"
    "on_table_mission_clicked\0"
    "on_mission_sel_col_currentIndexChanged\0"
    "on_rech_mission_textChanged\0"
    "on_actionadd_mission_triggered\0"
    "on_actiondelete_mission_triggered\0"
    "on_stat_emp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion_zouhour[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    1,   84,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
       9,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestion_zouhour::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestion_zouhour *_t = static_cast<gestion_zouhour *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_rech_emp_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_actiondelete_emp_triggered(); break;
        case 2: _t->on_actionadd_emp_triggered(); break;
        case 3: _t->on_emp_sel_col_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_table_emp_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_table_emp_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_table_mission_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_table_mission_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_mission_sel_col_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_rech_mission_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_actionadd_mission_triggered(); break;
        case 11: _t->on_actiondelete_mission_triggered(); break;
        case 12: _t->on_stat_emp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject gestion_zouhour::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gestion_zouhour.data,
      qt_meta_data_gestion_zouhour,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestion_zouhour::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_zouhour::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestion_zouhour.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestion_zouhour::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
