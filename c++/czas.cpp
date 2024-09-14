#include <iostream>

using namespace std;

int main(){
    int czas;

    cin >> czas;

    int sekundy = czas % 60;
    int minuty = (czas - sekundy) / 60;
    int godziny = minuty / 60;
    minuty = minuty - godziny*60;
    
    cout << godziny << "g" << minuty << "m" << sekundy << "s";
}