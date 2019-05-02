#include "ccomxbee.h"
#include "mainwindow.h"
#include <QCoreApplication>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Instanciation de l'interface graphique (plein écran)
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
