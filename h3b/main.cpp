#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    {
        Animal a;
        a.callOut();
    }

    {
        Dog d;
        d.callOut();
    }

    return 0;
}
