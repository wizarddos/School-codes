#include <iostream>

using namespace std;

int main(){
    int szerokosc, dlugosc,  wysokosc;
    cin >> szerokosc;
    cin >> dlugosc;
    cin >> wysokosc;

    cout << szerokosc*dlugosc*wysokosc << endl;
    cout <<  2*szerokosc*dlugosc + 2*szerokosc*wysokosc + 2*dlugosc*wysokosc;
}