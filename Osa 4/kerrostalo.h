#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include <iostream>
using namespace std;
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    virtual ~Kerrostalo();
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
    double laskeKulutus();
};

#endif // KERROSTALO_H
