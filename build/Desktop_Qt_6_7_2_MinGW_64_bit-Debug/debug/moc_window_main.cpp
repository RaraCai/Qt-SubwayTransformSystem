/****************************************************************************
** Meta object code from reading C++ file 'window_main.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../window_main.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSubwayTransferENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSubwayTransferENDCLASS = QtMocHelpers::stringData(
    "SubwayTransfer",
    "senddata",
    "",
    "subwayGraph*",
    "on_exitButton_clicked",
    "update_startStations",
    "start_linename",
    "update_endStations",
    "end_linename",
    "on_startLine_cbox_currentTextChanged",
    "arg1",
    "on_endLine_cbox_currentTextChanged",
    "on_pushButton_clicked",
    "on_updatelinesButton_clicked",
    "on_mapButton_clicked",
    "on_zoomin_button_clicked",
    "on_zoomout_button_clicked",
    "on_singleButton_clicked",
    "on_profileButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSubwayTransferENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   95,    2, 0x08,    3 /* Private */,
       5,    1,   96,    2, 0x08,    4 /* Private */,
       7,    1,   99,    2, 0x08,    6 /* Private */,
       9,    1,  102,    2, 0x08,    8 /* Private */,
      11,    1,  105,    2, 0x08,   10 /* Private */,
      12,    0,  108,    2, 0x08,   12 /* Private */,
      13,    0,  109,    2, 0x08,   13 /* Private */,
      14,    0,  110,    2, 0x08,   14 /* Private */,
      15,    0,  111,    2, 0x08,   15 /* Private */,
      16,    0,  112,    2, 0x08,   16 /* Private */,
      17,    0,  113,    2, 0x08,   17 /* Private */,
      18,    0,  114,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SubwayTransfer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSubwayTransferENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSubwayTransferENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSubwayTransferENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SubwayTransfer, std::true_type>,
        // method 'senddata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<subwayGraph *, std::false_type>,
        // method 'on_exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_startStations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'update_endStations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_startLine_cbox_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_endLine_cbox_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updatelinesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mapButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoomin_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoomout_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_singleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_profileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SubwayTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubwayTransfer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->senddata((*reinterpret_cast< std::add_pointer_t<subwayGraph*>>(_a[1]))); break;
        case 1: _t->on_exitButton_clicked(); break;
        case 2: _t->update_startStations((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->update_endStations((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_startLine_cbox_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_endLine_cbox_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_updatelinesButton_clicked(); break;
        case 8: _t->on_mapButton_clicked(); break;
        case 9: _t->on_zoomin_button_clicked(); break;
        case 10: _t->on_zoomout_button_clicked(); break;
        case 11: _t->on_singleButton_clicked(); break;
        case 12: _t->on_profileButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubwayTransfer::*)(subwayGraph * );
            if (_t _q_method = &SubwayTransfer::senddata; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SubwayTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubwayTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSubwayTransferENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SubwayTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SubwayTransfer::senddata(subwayGraph * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
