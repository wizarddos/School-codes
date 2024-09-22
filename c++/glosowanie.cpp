#include <iostream>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    if((a+b) != 100){
        cout << "SKANDAL";
    }else if(a > b){
        cout << "Bitek";
    }else if(a < b){
        cout << "Bajtek";
    }else{
        cout << "Remis";
    }
}