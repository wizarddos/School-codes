#include <iostream>

using namespace std;

int main(){
    int potega;

    cin >> potega;

    int reszta = potega % 4;

    if(reszta == 1){
        cout << "2" << endl;
    }else if(reszta == 2){
        cout << "4" << endl;
    }else if(reszta == 3){
        cout << "8" << endl;
    }else if(reszta == 0){
        cout << "6";
    }
}