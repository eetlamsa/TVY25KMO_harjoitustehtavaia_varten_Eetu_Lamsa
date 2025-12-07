#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    cout << "=== Osoittimet ja Referenssit ===" << endl;

    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << "\n=== pointer vs reference test ===" << endl;

    int b = 6;
    // pointerA voidaan vaihtaa osoittamaan b:hen
    pointerA = &b;

    // refA = b;  <- tämä EI vaihda refA:n osoitetta, vaan asettaa a = 6
    refA = b;

    cout << "a: " << a << "  (huom: refA = b muutti a:n arvon!)\n";
    cout << "pointerA osoittaa nyt osoitteeseen: " << pointerA << " ja arvo on: " << *pointerA << endl;

    cout << "\n=== Olio argumenttina (kopio) ===" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);     // Kopio
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "\n=== Referenssi argumenttina ===" << endl;

    ClassB &refB = objB;  // viite objB:hen
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
