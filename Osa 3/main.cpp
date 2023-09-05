#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef jyrki("Jyrki");
    ItalianChef mario("Mario", 400, 300);
    jyrki.makeSalad();
    jyrki.makeSoup();
    return 0;
}
