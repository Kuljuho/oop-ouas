#include <iostream>
#include <memory>
using namespace std;

#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo* talo = new Kerrostalo;
    talo->laskeKulutus(2);
    delete talo;
    return 0;
}
