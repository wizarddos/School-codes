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
    for(int i = 0; i < height; i++){ // Wczytujemy planszę
        string row;
        cin >> row;
        board.push_back(row);
    }

    int most_pawns_in_row = 0; // Przechowuje klucz pola z rzędu w którym jest najwięcej pionkow - współrzędna X
    if(width > 1){
        for(int i = 0; i < width; i++){ // W którym rzędzie mamy najwięcej pionków
            if(count(board[i].begin(), board[i].end(), '#') > most_pawns_in_row){
                most_pawns_in_row = i;
            }
        }
    }

    vector<string> columns(width, string(height, ' ')); // j - Nr. Kolumny; i - nr Wiersza
    if(height > 1){
        
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                columns[j][i] = board[i][j];
            }
        }

    }

    int most_pawns_in_column = 0; // Przechowuje klucz pola z kolumna w której jest najwięcej pionkow - współrzędna Y
    if(width > 1){
        for(int i = 0; i < height; i++){ // W której Kolumnie mamy najwięcej pionków
            if(count(columns[i].begin(),  columns[i].end(), '#') > most_pawns_in_column){
                most_pawns_in_column = i;
            }
        }
    }

    int moves = 0;

    if(width > 1){
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if(board[i][j] != '#'){
                    continue;
                }
                bool x_match = (i == most_pawns_in_row);
                bool y_match = (j == most_pawns_in_column);

                if(x_match && y_match){
                }else if(!x_match && !y_match){
                    moves = moves + 2;
                }else{
                    moves++;
                }
            }
        }
    }else{
        for(int i = 0; i < height; i++){
            cout << "i = " << i << " Pole: " << board[i][0];
            cout << most_pawns_in_row << endl;
            if(board[i][0] != '#'){
                continue;
            }
            
            bool x_match = (i == most_pawns_in_row);

            if(x_match){
                continue;
            }else{
                moves++;
            }   
        }
    }

    

    cout << "Row: " << most_pawns_in_row << " Column: " << most_pawns_in_column << endl;
    cout << moves;
    
}