#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;

class Kerros
{
public:
    Kerros();
    virtual ~Kerros();
    Asunto as1, as2, as3, as4;
    virtual void maaritaAsunnot() {
        as1.maarita(2, 100);
        as2.maarita(2, 100);
        as3.maarita(2, 100);
        as4.maarita(2, 100); }
    double laskeKulutus(double kulutusKerroin);
};

#endif // KERROS_H
