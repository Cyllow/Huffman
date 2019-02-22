/****************************************************************************
** Meta object code from reading C++ file 'chenhuffman.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Huffman/chenhuffman.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chenhuffman.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChenHuffman[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
     108,   69,   63,   12, 0x08,
     153,  144,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChenHuffman[] = {
    "ChenHuffman\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0float\0"
    "HuffTreeNode,filename,filelength,count\0"
    "Compress(HuffNode[],char*,long,int)\0"
    "filename\0UnCompress(char*)\0"
};

void ChenHuffman::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChenHuffman *_t = static_cast<ChenHuffman *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: { float _r = _t->Compress((*reinterpret_cast< HuffNode(*)[]>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 3: _t->UnCompress((*reinterpret_cast< char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChenHuffman::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChenHuffman::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChenHuffman,
      qt_meta_data_ChenHuffman, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChenHuffman::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChenHuffman::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChenHuffman::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChenHuffman))
        return static_cast<void*>(const_cast< ChenHuffman*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChenHuffman::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
