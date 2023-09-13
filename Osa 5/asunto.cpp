#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukasMaara, int neliot)
{
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
    cout<<"Asunto maaritetty, asukkaita on " << asukasMaara << " ja nelioita on " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = (asukasMaara * neliot) * hinta;
    cout<<"Asunnon kulutus kun hinta on " << hinta << " = " << kulutus << endl;
    return kulutus;
}
