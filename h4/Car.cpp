#include <iostream>
#include "Car.h"

Car::Car() : brand(""), model("") {}

Car::Car(string b, string m) : brand(b), model(m) {}


void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}


void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel() const {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() const {
    cout << "Auto: " << brand << " " << model << endl;

    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << "L" << endl;


    cout << "Rengas 1: " << objWheel1.getSize() << ", Tuumaa: " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << ", Tuumaa: " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << ", Tuumaa: " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << ", Tuumaa: " << objWheel4.getType() << endl;
}
