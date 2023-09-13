#include "katutaso.h"



Katutaso::Katutaso() : Kerros(false)
{
    ks1 = new Asunto();
    ks2 = new Asunto();
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{
    delete ks1;
    delete ks2;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritellaan katutason kerrokselta perittyja asuntoja"<<endl;
    cout<<"Maaritellaan 2 kpl katutason asuntoja"<<endl;
    ks1->maarita(2, 100);
    ks2->maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus1 = ks1->laskeKulutus(hinta);
    double kulutus2 = ks2->laskeKulutus(hinta);

    double katutasonkokonaiskulutus = kulutus1 + kulutus2;
    cout << "Katutason kokonaiskulutus kun hinta on " << hinta << " = " << katutasonkokonaiskulutus << endl;
    return katutasonkokonaiskulutus;
}
