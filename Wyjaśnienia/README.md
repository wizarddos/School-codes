# Wyjaśnienia zadań

W tym katalogu są pliki `.md` z wyjaśnieniami tzn.

- Zasada działania programu
- Przykład krok po kroku
- Kod z komentarzami

Wszystkie są w języku C++

W międzyczasie:

# C++ 101 - czyli od podstaw

1. Podstawowa struktura programu:

Od `//` zaczynają się komentarze - Notatki dla nas, które C++ ignoruje i można tam pisać cokolwiek się chce
```cpp
#include <iostream> //Dołączamy bibliotekę Wejścia/Wyjścia (czyli po prostu z wyświetlaniem i wczytywaniem)

using namespace std; // Wskazujemy naszemu C++'owi, że będziemy korzystać domyślnych funkcji C++

int main(){ // Definiujemy główną funkcję programu (No czyli właśnie main) - tutaj C++ zaczyna czytać nasz kod
    // tutaj kod    
}
```

2. Tworzenie (a.ka **Definiowanie**) zmiennych

```cpp
// Szablon: [Typ] [Nazwa] = [wartość];

int mojaLiczbaCalkowita = 1;
```
Typów mamy kilka m.in:
- `int` - Liczba Całkowita
- `float` - Liczba zmiennoprzecinkowa (Czyli rzeczywista ale bez ułamków zwykłych)
- `char` - Znak
- `string` - Ciąg znaków

W nazwie zmiennej nie może być 
- Polskich znaków
- Spacji

Oraz nie może nazywać się tak, jak funkcja bądź inne **słowo kluczowe** w C++ (Np. nie możesz mieć zmiennej `true`)

Możemy też definiować kilka zmiennych w jednej linijce, po przecinkach
```cpp
int pierwszaZmienna, drugaZmienna, trzeciaZmienna;
```

A by przypisać wartość do już istniejącej zmiennej wystarczy zrobić to samo co przy definiowaniu, ale bez typu
```cpp
mojaLiczbaCalkowita = 2;
```

3. Wczytywanie i wyświetlanie na ekran:
```cpp
// Mamy taką zmienną:
int mojaZmienna = 0;

// Wczytujemy do niej daną z klawiatury
cin >> mojaZmienna;

// Możemy ją teraz wyświetlić:
//   1. Samą
cout << mojaZmienna;
//   2. Z jakimś tekstem:
cout << "Wartość mojej zmiennej to: " << mojaZmienna
//   3. Z jakimś tekstem i końcem linii
cout << "Wartość mojej zmiennej to:" << mojaZmienna << endl;
//      lub:
cout << "Wartość mojej zmiennej to:" << mojaZmienna << "\n";
```


4. Operacje matematyczne

Na zmiennych możemy wykonywać operacje matematyczne

`+` - Dodawanie
`-` - Odejmowanie
`*` - Mnożenie
`/` - Dzielenie
`%` - **Modulo**, czyli na ludzki reszta z dzielenia

```cpp
int a = 5;
int b = 3;

cout << "Dodawanie: " << a + b << endl;
cout << "Odejmowanie: " << a - b << endl;
cout << "Mnożenie: " << a*b << endl;
cout << "Dzielenie: " << a/b << endl;
cout << "Modulo: " << a%b << endl;
// A wynik tego programu to:
//  Dodawanie: 8
//  Odejmowanie: 2
//  Mnożenie: 15
//  Dzielenie: 1
//  Modulo: 2
```

Można też używać po prostu liczb
```cpp
cout << 2+5;
// Wynik: 7
```

Albo liczb i zmiennych
```cpp
cout << 2+b;
// Wynik: 5
```

5. Instrukcje Warunkowe:

Sprawdzają nam warunek - Tak najprościej:

Jesli to, co w nawiasie jest prawdziwe, zrób to

Możemy też dodać **klauzulę `else`** - Dla przeciwności tego co w nawiasie

Tzn.
```cpp
int a = 5, b = 3

if(a > b){
    cout << "a jest większe" << endl;
}else{
    cout << "b jest większe" << endl;
}
```

_Ale co jeśli a jest równe b?_ 

`else` i `if` można ze sobą łączyć
```cpp
int a = 5, b = 3

if(a > b){
    cout << "a jest większe" << endl;
}else if(a == b){
    cout << "a i b są równe" << endl;
}else{
    cout << "b jest większe" << endl;
}
```

_Dlaczego `==` a nie po prostu `=`_

Bo `=` (Jak dobrze pamiętamy), używa się przy **przypisywaniu wartości do zmiennej** - A równości i przypisania mylić ze sobą nie chcemy

6. Pętla

Pętla to po prostu nasz sposób na powiedzenie C++'owi

> Masz tu taki zestaw instukcji i wykonaj go `n` razy

Gdzie n oczywiście też mu podajemy - wygląda to tak:

```cpp
for(inicjalizacja; warunek; inkrementacja) {
    instrukcje
}

// Czyli na przykładzie:
for(int i = 0; i <= 5; i++){
    cout << i;
}
```
A w krokach

1. Inicjalizacja - Tu definiujemy zmienną która przechowuje informację o tym który raz pętla działa (Czyli którą **iterację** wykonuje);
2. Warunek - Mówimy do kiedy ta pętla ma działać (Ta działa dopóki i jest mniejsze bądź równe 5, sprawdzane przed wykonaniem kodu wewnątrz)
3. Inkrementacja - Taka bardzo ładna nazwa na dodanie 1 do zmiennej. Ten `++` właśnie znaczy to samo co `+1`



To w sumie tyle na razie, jak coś to ta sekcja się rozrośnie: