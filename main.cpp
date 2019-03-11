#include <QCoreApplication>
#include "ccomxbee.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cComXbee comXbee;

    return a.exec();
}
