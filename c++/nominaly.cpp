#include <iostream>

using namespace std;

int main(){
    long long kwota;

    cin >> kwota;

	if(kwota == 1){
		cout<< "NO MONEY"<< endl;
        return 0;
	}

    int reszta = kwota % 3;

    if(reszta == 0){
        cout << "0 " << kwota / 3;
    }else if(reszta == 2){
        cout << "1 " << kwota / 3;
    }else if(reszta == 1){
        long long n = (kwota - 1) / 3;
		cout << "2 " << n-1;
    }
}
