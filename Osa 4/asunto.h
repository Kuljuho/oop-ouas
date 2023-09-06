#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto
{
public:
    Asunto();
    virtual ~Asunto();
    int asukasMaara;
    int neliot;
    virtual void maarita(int, int);
    double laskeKulutus(double maarita);
};

#endif // ASUNTO_H
