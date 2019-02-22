#include "chenhuffman.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChenHuffman w;
    w.show();

    return a.exec();
}
