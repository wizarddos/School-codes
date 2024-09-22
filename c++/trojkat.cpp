#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    bool ab = (a + b) > c;
    bool ac = (a + c) > b;
    bool bc = (b + c) > a;

    if(ab && ac && bc){
        cout << "TAK" << endl;
    }else{
        cout << "NIE" << endl;
    }
}