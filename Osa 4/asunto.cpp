#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukasMaara, int neliot)
{
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
    cout << "Asunto maaritetty kun asukkaita = " << asukasMaara << ", nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double kulutusKerroin)
{
    double kulutus = (asukasMaara + neliot) * kulutusKerroin;
    cout << "Asunnon kulutus, kun hinta = " << kulutusKerroin << " on " << kulutus << endl;
    return kulutus;
}

