#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso: public Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();

    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

private:
    Asunto* ks1 = nullptr;
    Asunto* ks2 = nullptr;

};

#endif // KATUTASO_H
