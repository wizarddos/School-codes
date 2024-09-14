#include <iostream>

using namespace std;

int main(){
    int zwierzeta;

    cin >> zwierzeta;
    int koty = zwierzeta / 4;
    int psy = zwierzeta - koty;

    cout << koty << " " << psy; 
}