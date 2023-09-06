#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{

}

double Kerros::laskeKulutus(double kulutusKerroin)
{
    double kulutus = 0;
    kulutus += as1.laskeKulutus(kulutusKerroin);
    kulutus += as2.laskeKulutus(kulutusKerroin);
    kulutus += as3.laskeKulutus(kulutusKerroin);
    kulutus += as4.laskeKulutus(kulutusKerroin);
    return kulutus;
}
