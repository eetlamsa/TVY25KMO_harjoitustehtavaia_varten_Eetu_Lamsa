#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
    cout << "Animal konstruktori" << endl;
}

Animal::~Animal()
{
    cout << "Animal destruktori" << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}
