#include <iostream>

using namespace std;

int main(){
    char kol;
    int rzad;

    cin >> kol >> rzad;
    if(kol == 'a' || kol == 'h'){
        if(rzad == 1 || rzad == 8){
            cout << "3";
        }else{
            cout << "5";
        }
    }else if(rzad == 1 || rzad == 8){
        cout << "5";
    }else{
        cout << "8";
    }
}