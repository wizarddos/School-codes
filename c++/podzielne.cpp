#include <iostream>

using namespace std;

int main(){
    int poczatek,koniec,dzielnik;

    cin >> poczatek;
    cin >> koniec;
    cin >> dzielnik;

    int podzielne = (koniec / dzielnik) - (poczatek / dzielnik);

    if(poczatek % dzielnik == 0)
        podzielne++;
    cout << podzielne;
}