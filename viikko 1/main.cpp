#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    int satunnainenLuku = rand() % maxnum + 1;
    int kayttajanNumero = -1;
    int arvaustenMaara = 0;

    while (kayttajanNumero != satunnainenLuku) {
        cout << "Arvaa luku 1-" << maxnum << " valilta" << endl;
        cin >> kayttajanNumero;

        cout << "Annoit numeron = " << kayttajanNumero << endl;
        arvaustenMaara++;

        if (kayttajanNumero > satunnainenLuku) {
            cout << "Luku on suurempi kuin arvattava luku." << endl;
        }
        if (kayttajanNumero < satunnainenLuku) {
            cout << "Luku on pienempi kuin arvattava luku." << endl;
        }
    }
    cout << "Arvottu luku oli " << satunnainenLuku << ". Oikea vastaus!" << endl;
    return arvaustenMaara;
}

int main() {
    srand(time(0)); // alustetaan satunnaislukugeneraattori

    int maxnum;
    cout << "Anna korkein mahdollinen arvattava luku: ";
    cin >> maxnum;

    int arvaustenMaara = game(maxnum);

    cout << "Arvausten maara: " << arvaustenMaara << endl;

    return 0;
}
