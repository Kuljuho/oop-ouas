#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{

}

double Katutaso::laskeKulutus(double kulutusKerroin)
{
    double kulutus = 0;
    kulutus += as1.laskeKulutus(kulutusKerroin);
    kulutus += as2.laskeKulutus(kulutusKerroin);
    return kulutus;
}




