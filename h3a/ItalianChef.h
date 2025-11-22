#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string name);
    ~ItalianChef();

    void makePasta();
    std::string getName();
};

#endif // ITALIANCHEF_H
