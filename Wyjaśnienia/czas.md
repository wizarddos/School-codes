# Czas

Dostajemy liczbę sekund, mamy je przekonwertować na godziny i minuty

## Sposób:

Niech ten ta liczba sekund będzie u nas nazywana **czasem**

1. Wyznaczmy resztę z dzielenia czasu przez 60 - To będą wszystkie nadmiarowe sekundy, których nie zamienimy na minuty, ani tym bardziej na godziny
2. Dzielimy czas, bez nadmiarowych sekund przez 60 - wyjdą nam minuty, ale wraz z godzinami
3. Następnie, wynik poprzedniego działania dzielimy znów na 60 - Jeśli minuty nie dzielą się równo przez 60, wyjdzie nam liczba z przecinkiem. 
Lecz dzięki temu, jak C++ (I python) jest skonstruowany, sam pominie tę część po przecinku i zwróci nam czystą (naturalną) ilość godzin

4. Pamiętajmy, że nadal trzymamy w zmiennej `minuty` liczbę minut wraz z godzinami - Odejmijmy je od siebie i wyjdzie nam ile faktycznie minut zostało

## Przykład:

Niech nasz `czas = 44 000`

1. Dzielimy `44 000` przez 60 i szukamy reszty

$\ 44000 / 60 =  43 980 r. 20 $

`20` to liczba naszych sekund

2. Teraz szukamy minut - wiemy że `44 000` bez nadmiarowych sekund to `43 980`, więc tę liczbę dzielimy przez 60
$\ 43 980 / 60 = 733 $

`43 980` sekund to `733` minuty - Trochę więcej niż 60 czyż nie?

Czas na godziny 

$\ 733 / 60 \approx 12$

Dlaczego "około"? Bo:

$\ 12 * 60 = 720 $ 

I to właśnie robimy dalej - sprawdzamy ile C++ nam "uciął" tych minut i podmieniamy wartość na faktycznie tylko minuty
$\ 733 - 720 = 13 $


## Kod
```cpp
#include <iostream>

using namespace std;

int main(){
    int czas;

    cin >> czas; // Wczytujemy czas

    int sekundy = czas % 60; // Liczymy ile mamy nadmiarowych sekund
    int minuty = (czas - sekundy) / 60; // Gdy wiemy że wyjdzie bez przecinka, liczymy minuty wraz z godzinami
    int godziny = minuty / 60; // Wyliczamy ile razy 60 minut mieści się w liczbie trzymanej przez `minuty` - C++ utnie resztę z dzielenia 
    minuty = minuty - godziny*60; // Sprawdzamy ile ta reszta faktycznie wyniosła
    
    cout << godziny << "g" << minuty << "m" << sekundy << "s"; // Wyświetl
}
```