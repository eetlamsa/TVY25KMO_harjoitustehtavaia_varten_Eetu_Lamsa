#include "Car.h"
#include <iostream>

void Car::setBrand(const std::string& b) {
    brand = b;

}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}
void Car::printData() const {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << yearModel << std::endl;
}
