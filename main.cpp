#include "ccomxbee.h"
#include "mainwindow.h"
#include <QCoreApplication>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Instanciation de l'objet du terminal série (Xbee)
    cComXbee *comXbee;
    comXbee = new cComXbee;

    // Instanciation de l'interface graphique (plein écran)
    MainWindow w(comXbee);
    w.show();
    //w.showMaximized();

    return a.exec();
}
