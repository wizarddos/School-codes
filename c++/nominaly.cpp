#include <iostream>

using namespace std;

int main(){
    int kwota;

    cin >> kwota;

	if(kwota == 1){
		cout<< "NO MONEY"<< endl;
	}

    int reszta = kwota % 3;

    if(reszta == 0){
        cout << "0 " << kwota / 3;
    }else if(reszta == 2){
        cout << "1 " << kwota / 3;
    }else if(reszta == 1){
        int n = kwota / 3;
		cout << "2 " << n-1;
    }
}
