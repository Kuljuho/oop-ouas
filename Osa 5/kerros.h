#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include <memory>
#include "asunto.h"
using namespace std;

class Kerros
{
public:
    Kerros(bool tulosta = true);
    virtual ~Kerros();

    virtual void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto* as1 = nullptr;
    Asunto* as2 = nullptr;
    Asunto* as3 = nullptr;
    Asunto* as4 = nullptr;
};

#endif // KERROS_H
