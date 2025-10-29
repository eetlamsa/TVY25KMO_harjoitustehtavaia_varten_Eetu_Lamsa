#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;


void calcSum(int a, int b) {
    cout << "Summa (calcSum): " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0)
        cout << "Virhe: jakaja ei voi olla nolla!" << endl;
    else if (b < 0)
        cout << "Virhe: jakaja ei saa olla negatiivinen!" << endl;
    else
        cout << fixed << setprecision(2)
             << "Jakolasku (calcDiv): " << (double)a / b << endl;
}


int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0)
        throw std::runtime_error("jakaja ei voi olla nolla.");
    if (b < 0)
        throw std::runtime_error("jakaja ei saa olla negatiivinen.");
    return (float)a / b;
}

int main() {
    int a, b;
    float result;

    cout << "Anna eka kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    cout << endl;


    calcSum(a, b);
    calcDiv(a, b);

    cout << endl;


    int sumResult = retSum(a, b);
    cout << a << " + " << b << " = " << sumResult << endl;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
