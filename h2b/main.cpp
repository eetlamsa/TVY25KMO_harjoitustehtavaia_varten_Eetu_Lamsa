#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        yearModel = y;
    }


    void printData() const {
        cout << "Merkki: " << brand
             << ", Malli: " << model
             << ", Vuosi: " << yearModel << endl;
    }
};

int main() {

    vector<Car> carList;


    carList.push_back(Car("Toyota", "Corolla", 1999));
    carList.push_back(Car("BMW", "328i", 1995));
    carList.push_back(Car("Ford", "F-250", 2022));

   //toinen alkio
    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    cout << "Kaikkien autojen tiedot:" << endl;

    //kaikki alkiot for loopilla
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
