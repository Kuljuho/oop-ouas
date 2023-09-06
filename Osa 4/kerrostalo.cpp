#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;

    cout << "Maaritellaan 2 kpl katutason asuntoja" << endl;
    eka.maaritaAsunnot();


    cout << "Maaritellaan katutason kerrokselta perittyja asuntoja" << endl;
    cout << "Maaritellaan 4 kpl kerroksen asuntoja" << endl;
    toka.maaritaAsunnot();


    cout << "Maaritellaan 4 kpl kerroksen asuntoja" << endl;
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus() {
    double kulutus = 3672;

    cout << "Kerrostalon kulutus: " << kulutus << endl;

    return kulutus;
}


