#include <iostream>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"
#include <memory>
#include <vector>
using namespace std;

int main()
{

    vector<Car> talli;

    Car tiedot;
    tiedot.setBrand("BMW");
    tiedot.setModel("535d");
    tiedot.setYearModel(2009);

    talli.push_back(tiedot);

    for(int x = 0; x < talli.size(); x++ ) {
        talli[x].printData();


        Rectangle* rect = new Rectangle;

        rect->setWidth(5.0);
        rect->setHeight(3.0);

        cout << "Area: " << rect->getArea() << endl;
        cout << "Circumference: " << rect->getCircum() << endl;


        delete rect;

        unique_ptr<Student> opp = make_unique<Student>();

        opp->setName("Urho Kekkonen");
        opp->setStudentNumber(80085);
        opp->setAverage(9.9);

        cout << "Name: " << opp->getName() << endl;
        cout << "Student number: " << opp->getStudentNumber() << endl;
        cout << "Average: " << opp->getAverage() << endl;
















    //Car myCar;

    //myCar.setBrand("Volkswagen");
    //myCar.setModel("Golf");
    //myCar.setYearModel(2015);

    //myCar.printData();

    return 0;
    } }

