#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;

class ItalianChef: public Chef
{
public:
    ItalianChef(string name, int vesi, int jauhot);
    string getName();
    void makePasta();
    ~ItalianChef();
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
