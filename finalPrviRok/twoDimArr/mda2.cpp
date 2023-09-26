#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

/*
    *  *
     **
     **
    *  *
*/

void fillCharArray (char array[][COLS], int size, char ch){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            if (i == j){
                array[i][j] = ch;
            }
            else if (i + j == 3){
                array[i][j] = ch;
            }
            else {
                array[i][j] = ' ';
            }
        }
    }
}

void printArray(char array[ROWS][COLS], int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << array[i][j];
        }
        cout << endl;
    }
}

int main(){

    char ar[ROWS][COLS];
    
    fillCharArray(ar, 4, '*');
    printArray(ar, 4, 4);
    
    return 0;
}