#include <iostream>

using namespace std;

int main(){
    int poczatek,koniec,dzielnik;

    cin >> poczatek;
    cin >> koniec;
    cin >> dzielnik;

    int podzielne = 0;
    for(int i = poczatek; i <= koniec; i++){
        if(i%dzielnik == 0)
            podzielne++;
    }

    cout << podzielne;
}