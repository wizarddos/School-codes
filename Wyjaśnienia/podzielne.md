# Podzielne

Dostajemy 3 liczby w następującej kolejności
- Początek przedziału (A)
- Koniec przedziału (B)
- Dzielnik (M)

Musimy znaleźć ile w przedziale jest liczb podzielnych przez dzielnik
(Zapamiętaj literki, bo się tu przydadzą)

## Pomysł:

Standardowe sprawdzenie każdego z elementów przedziału zajmie zbyt dużo czasu na dużych liczbach - jest inny sposób

Możemy wykorzytać taki wzór:

$\ (B/M) - (A/M) $

_Dlaczego on działa?_

$\ B/M $ mówi nam ile razy dzielnik mieści się w naszym B (Ostatniej liczbie przedziału) - jest to jakieś tam $\ k $
Więc od 0 do ostatniej liczby przedziału (B) mamy $\ k $ liczb które można zapisać jako $\ n * M $ - czyli (z definicji podzielności), liczb podzielnych przez M

Ale właśnie, od 0 - Nasz ciąg nie zawsze zaczyna się od 0.

Więc po to odejmujemy $\ (A/M) $. 
To wyrażenie zwraca ile jest liczb w przedziale od `0` do `A` podzielnych przez `M` - Czyli tych które są wliczone w poprzednim działaniu, a nie powinny

I to wszystko działa, dopóki `A` nie jest podzielne przez `M`.

Gdy jest wtedy, przez to że operujemy na zbiorach zamkniętych (By zrobić otwarty trzebaby bawić się w nawiasy w nawiasach, a nam się nie chce) to A jest zarówno w $\ [A, B] $ jak i w $\ [0, A] $

Więc przez $\ - (A/M) $ odejmujemy również A od wyników, a nie powinniśmy

Co zrobić? 

Najprościej, jeśli A jest podzielne przez M - na końcu dodać 1

## Przykład
Tutaj przeanaizujemy 2 przykłady:
1. Gdy M nie dzieli A
2. Gdy M dzieli A

### Case 1:

Dostajemy takie dane:
- Początek (A) = 3
- Koniec (B) = 10
- Dzielnik (M) = 2

Zbiór od 0 do B prezentuje się tak

$\ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 $

Jak widać mamy tu 6 liczb, które można zapisać jako `n * dzielnik` gdzie $\ n \in N $

$\ \{ 0*M; 1; 1*M; 3; 2*M; 5; 3*M; 7; 4*M; 9; 5*M \} $

Aby wyeliminować te poza zbiorem, odejmujemy ilość liczb podzielnych przez M (tutaj 2), ze zbioru $\ [0, A] $

$\ \{0 * M; 1; 1 * M \} $

Czyli mamy `2` takie liczby 

$\ 6 - 2 = 4 $

I gdy rozpiszemy sobie przedział $\ [3, 10] $ to faktycznie znajdziemy tam 4 liczby podzielne przez 2 - 4,6,8,10

### Case 2:
Dostajemy takie dane:
- Początek (A) = 2
- Koniec (B) = 10
- Dzielnik (M) = 2

Zbiór od 0 do B prezentuje się tak
$\ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 $

I możemy go zapisać jako

$\ \{ 0*M; 1; 1*M; 2; 2*M; 5; 3*M; 7; 4*M; 9; 5*M \} $

Znów 6 liczb - Tu również eliminujemy te poza zbiorem
$\ \{0 * M; 1; 1 * M \} $ 
2 liczby

$\ 6 - 2 = 4 $

Ale stop. Czy w przedziale `[2, 10]` nie ma przypadkiem 5 takich liczb? No właśnie są

Wzięło się to właśnie z tego o czym mówiłem - odjeliśmy 2 jako część zbioru [0, A], czyli tego niepotrzebnego

Wystarczy dodać 1 i jesteśmy w domu
$\ 4 + 1 = 5 $

## Kod:

```cpp
#include <iostream>

using namespace std;

int main(){
    int poczatek,koniec,dzielnik;

    cin >> poczatek;
    cin >> koniec; // wczytujemy dane do programu
    cin >> dzielnik;

    int podzielne = (koniec / dzielnik) - (poczatek / dzielnik); // Tu wchodzi nasz wzór, ile liczb podzielnych jest w przedziale [0, koniec], bez tych z przedziału [0, początek]

    if(poczatek % dzielnik == 0) // Jeśli `początek` został przypadkiem odjęty, niech wróci
        podzielne++;
    cout << podzielne; // wyświetl na ekran
}
```