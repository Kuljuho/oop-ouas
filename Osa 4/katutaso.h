#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"
#include <iostream>
using namespace std;


class Katutaso: public Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();
    Asunto as1, as2;
    void maaritaAsunnot() override {
        as1.maarita(2, 100);
        as2.maarita(2, 100); }
    double laskeKulutus(double kulutusKerroin);

private:
};

#endif // KATUTASO_H
