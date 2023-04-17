/****************************************************************************
** Meta object code from reading C++ file 'pageoflistcheckedman.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Final/pageoflistcheckedman.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageoflistcheckedman.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pageoflistcheckedman_t {
    QByteArrayData data[8];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pageoflistcheckedman_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pageoflistcheckedman_t qt_meta_stringdata_pageoflistcheckedman = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pageoflistcheckedman"
QT_MOC_LITERAL(1, 21, 33), // "on_pushButton_list_chuqin_cli..."
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 33), // "on_pushButton_list_tuiqin_cli..."
QT_MOC_LITERAL(4, 90, 30), // "on_pushButton_list_all_clicked"
QT_MOC_LITERAL(5, 121, 31), // "on_comboBox_choostwho_activated"
QT_MOC_LITERAL(6, 153, 4), // "arg1"
QT_MOC_LITERAL(7, 158, 28) // "on_pushButton_cancel_clicked"

    },
    "pageoflistcheckedman\0"
    "on_pushButton_list_chuqin_clicked\0\0"
    "on_pushButton_list_tuiqin_clicked\0"
    "on_pushButton_list_all_clicked\0"
    "on_comboBox_choostwho_activated\0arg1\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pageoflistcheckedman[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void pageoflistcheckedman::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pageoflistcheckedman *_t = static_cast<pageoflistcheckedman *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_list_chuqin_clicked(); break;
        case 1: _t->on_pushButton_list_tuiqin_clicked(); break;
        case 2: _t->on_pushButton_list_all_clicked(); break;
        case 3: _t->on_comboBox_choostwho_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject pageoflistcheckedman::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pageoflistcheckedman.data,
      qt_meta_data_pageoflistcheckedman,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pageoflistcheckedman::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pageoflistcheckedman::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pageoflistcheckedman.stringdata0))
        return static_cast<void*>(const_cast< pageoflistcheckedman*>(this));
    return QWidget::qt_metacast(_clname);
}

int pageoflistcheckedman::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
