#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int, string);

    int getSize() const;
    void setSize(int);

    string getType() const;
    void setType(string);
};

#endif
