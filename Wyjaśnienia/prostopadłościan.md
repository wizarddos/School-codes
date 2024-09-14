# Prostopadłościan

Dostajemy (W takiej kolejności)
 - Szerokość
 - Długość
 - Wysokość

I musimy policzyć objętość oraz pole powierzchni bocznej

## Sposób:
Tu kłania nam się zwykła matematyka:

Wzór na objętość prostopadłościanu to

$\ V = abc$

A pole powierzchni bocznej to

$\ S = 2ab + 2bc + 2ca $

Podstawiamy nasze dane do obu wzorów i mamy wynik

## Przykład

Dla prostopadłościanu o szerokości 1, długości 1 i wysokości 2 objętość będzie równa

$\ V = 1 * 1 * 2 $

$\ V = 2 $

A pole powierzchni bocznej

$\ V = 2*1*1 + 2*1*2 + 2*1*2 $

$\ V = 10 $

## Kod:
```cpp
#include <iostream>

using namespace std;

int main(){
    int szerokosc, dlugosc,  wysokosc; // Definiujemy zmienne
    cin >> szerokosc;
    cin >> dlugosc;        // Wczytujemy wszystkie zmienne
    cin >> wysokosc;

    cout << szerokosc*dlugosc*wysokosc << endl; // V = abc
    cout <<  2*szerokosc*dlugosc + 2*szerokosc*wysokosc + 2*dlugosc*wysokosc; // S = 2ab + 2ac + 2bc
}
```