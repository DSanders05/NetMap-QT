#include "netmapapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetMapApp w;
    w.show();
    return a.exec();
}
