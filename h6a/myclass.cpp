#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {
    //vanha syntaksi
    //connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
    //uusi versio
    connect(this, &Myclass::mySignal, this, &Myclass::mySlot);
}

void MyClass::raiseMySignal()
{
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
