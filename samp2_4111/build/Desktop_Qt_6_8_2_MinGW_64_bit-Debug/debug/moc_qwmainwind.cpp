/****************************************************************************
** Meta object code from reading C++ file 'qwmainwind.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qwmainwind.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwmainwind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN10QWMainWindE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QWMainWindE = QtMocHelpers::stringData(
    "QWMainWind",
    "actFontBold_triggered",
    "",
    "checked",
    "actFontItalic_triggered",
    "actFontUnder_triggered",
    "actNew_triggered",
    "actOpen_triggered",
    "actSavetriggered",
    "spinBoxFontSize_valueChanged",
    "aFontSize",
    "comboFont_currentIndexChanged",
    "arg1",
    "on_actAbout_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QWMainWindE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       4,    1,   71,    2, 0x0a,    3 /* Public */,
       5,    1,   74,    2, 0x0a,    5 /* Public */,
       6,    0,   77,    2, 0x0a,    7 /* Public */,
       7,    0,   78,    2, 0x0a,    8 /* Public */,
       8,    0,   79,    2, 0x0a,    9 /* Public */,
       9,    1,   80,    2, 0x0a,   10 /* Public */,
      11,    1,   83,    2, 0x0a,   12 /* Public */,
      13,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QWMainWind::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10QWMainWindE.offsetsAndSizes,
    qt_meta_data_ZN10QWMainWindE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QWMainWindE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWMainWind, std::true_type>,
        // method 'actFontBold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'actFontItalic_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'actFontUnder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'actNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actSavetriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'spinBoxFontSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'comboFont_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'on_actAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QWMainWind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWMainWind *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->actFontBold_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->actFontItalic_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->actFontUnder_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->actNew_triggered(); break;
        case 4: _t->actOpen_triggered(); break;
        case 5: _t->actSavetriggered(); break;
        case 6: _t->spinBoxFontSize_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->comboFont_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_actAbout_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *QWMainWind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWMainWind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QWMainWindE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QWMainWind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
