#include "ccomxbee.h"
#include "mainwindow.h"
#include <QCoreApplication>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cComXbee comXbee;

    MainWindow w;
    w.show();
    return a.exec();
}
