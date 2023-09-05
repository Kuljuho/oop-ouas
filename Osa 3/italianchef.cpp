#include "italianchef.h"

ItalianChef::ItalianChef(string name, int vesi, int jauhot) : Chef(name)
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef()
{

}
