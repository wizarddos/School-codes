// Kod przechodzi 4 z 6 testów
// Ogólnie w obu przypadkach gdzieś się za dużo dodaje

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int height, width;
    cin >> height;
    cin >> width;
    
    vector<string> board;
    for(int i = 0; i < width; i++){ // Wczytujemy planszę
        string row;
        cin >> row;
        board.push_back(row);
    }

    int most_pawns_in_row = 0; // Przechowuje klucz pola z rzędu w którym jest najwięcej pionkow - współrzędna X
    for(int i = 0; i < width; i++){ // W którym rzędzie mamy najwięcej pionków
        if(count(board[i].begin(), board[i].end(), '#') > most_pawns_in_row){
            most_pawns_in_row = i;
        }
    }

    vector<string> columns(width, string(height, ' ')); // j - Nr. Kolumny; i - nr Wiersza
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            columns[j][i] = board[i][j];
        }
    }

    int most_pawns_in_column = 0; // Przechowuje klucz pola z kolumna w której jest najwięcej pionkow - współrzędna Y
    for(int i = 0; i < height; i++){ // W której Kolumnie mamy najwięcej pionków
        if(count(columns[i].begin(),  columns[i].end(), '#') > most_pawns_in_column){
            most_pawns_in_column = i;
        }
    }

    int moves = 0;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(board[i][j] != '#'){
                continue;
            }
            bool x_match = (i == most_pawns_in_row);
            bool y_match = (j == most_pawns_in_column);

            if(x_match && y_match)
                continue;
            else if(!x_match && !y_match){
                moves = moves + 2;
                continue;
            }else{
                moves++;
            }
        }
    }

    cout << moves;
    
}