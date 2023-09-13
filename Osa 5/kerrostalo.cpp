#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{  
    eka = new Katutaso();
    toka = new Kerros(true);
    kolmas = new Kerros(true);
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double hinta)
{
    cout<<"Lasketaan koko kerrostalon kulutus"<<endl;
    double kulutus = 0;
    kulutus += eka->laskeKulutus(hinta);
    kulutus += toka->laskeKulutus(hinta);
    kulutus += kolmas->laskeKulutus(hinta);
    cout<<"Kerrostalon kokonaiskulutus: "<< kulutus << endl;
    return kulutus;
}
