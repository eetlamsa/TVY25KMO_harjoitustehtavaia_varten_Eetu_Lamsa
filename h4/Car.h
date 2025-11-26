#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;

public:
    Car();
    Car(string, string);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(string);

    string getBrand() const;
    void setBrand(string);

    void printDetails() const;
};

#endif
