#include <iostream>

using namespace std;

int main(){
    int num;
    char letter;
    cin >> num >> letter;

    int ascii = 0;

    ascii = num * 16;

    if(letter == 'A'){
        ascii = ascii + 10;
    }else if(letter == 'B'){
        ascii = ascii + 11;
    }else if(letter == 'C'){
        ascii = ascii + 12;
    }else if(letter == 'D'){
        ascii = ascii + 13;
    }else if(letter == 'E'){
        ascii = ascii + 14;
    }else if(letter == 'F'){
        ascii = ascii + 15;
    }

    cout << ascii << endl;
    cout << char(ascii) << endl;

}