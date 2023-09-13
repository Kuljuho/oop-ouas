#include "kerros.h"

Kerros::Kerros(bool tulosta)
{
    if (tulosta) {
        as1 = new Asunto();
        as2 = new Asunto();
        as3 = new Asunto();
        as4 = new Asunto();
        cout<<"Kerros luotu"<<endl;
    }
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritellaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus1 = as1->laskeKulutus(hinta);
    double kulutus2 = as2->laskeKulutus(hinta);
    double kulutus3 = as3->laskeKulutus(hinta);
    double kulutus4 = as4->laskeKulutus(hinta);

    double kerroksenkokonaiskulutus = kulutus1 + kulutus2 + kulutus3 + kulutus4;
    cout << "Kerroksen kokonaiskulutus kun hinta on " << hinta << " = " << kerroksenkokonaiskulutus << endl;
    return kerroksenkokonaiskulutus;
}
