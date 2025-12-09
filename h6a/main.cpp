#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass olio;
    olio.raiseMySignal();

    return a.exec();
}
