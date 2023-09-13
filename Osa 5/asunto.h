#include <iostream>
#include <memory>
using namespace std;

#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto
{
public:
    Asunto();
    virtual ~Asunto();

    int asukasMaara;
    int neliot;

    virtual void maarita(int asukasMaara, int neliot);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
