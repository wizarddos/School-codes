# Schronisko:

Z zadania wiemy, że w schronisku jest zawsze 3 razy więcej psów niż kotów
Musimy napisać kod który dla podanej liczby zwierząt wyliczy ile trzeba przygotować porcji karmy

## Sposób:

Jeśli psów mamy 3 razy więcej niż kotów to:
- Jako x oznaczmy liczbę kotów
- Wtedy 3x to są psy
- W sumie 3x + x = 4x to są zwierzęta

Czyli dzielimy podaną nam liczbę na 4, a potem odejmujemy to od tego co nam dano

## Przykład:

Dostajemy liczbę `36` jako dane wejściowe (liczbę zwierząt)

```
 koty = 36/4;
 psy = 36 - koty;
```

Tym samym
- 36 / 4 = 9 (Koty)
- 16 - 9 - 27 (Psy)

## Kod:
```cpp
#include <iostream>

using namespace std;

int main(){
    int zwierzeta;

    cin >> zwierzeta; // Pobieramy liczbę zwierząt
    int koty = zwierzeta / 4;  // Dzielimy zwierzęta na 4 grupy - 3 z nich to są psy, a ta jedna to właśnie koty
    int psy = zwierzeta - koty; // Skoro kotów jest x, zwierząt y a w schronisku mamy tylko psy i koty,  to psy = y - x

    cout << koty << " " << psy;  // Wyświetl wszystko na ekranie
}
```
