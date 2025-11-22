#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    {
    cout << "--- Chef ---" << endl;
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();
}
{

    cout << "\n--- ItalianChef ---" << endl;
    ItalianChef itChef("Anthony Bourdain");
    itChef.makeSalad();
    itChef.makeSoup();
    itChef.makePasta();

    cout << "name of the Italian Chef is  " << itChef.getName() << endl;
}

    return 0;
}
