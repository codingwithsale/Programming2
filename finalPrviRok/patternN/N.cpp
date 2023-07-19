#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

/*
    *  *
    ** *
    * **
    *  *
*/

const int ROWS = 4;
const int COLS = 4;

void fillCharArray(char arr[][COLS], int size, char ch){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            if (j == 0 || j == size - 1){
                arr[i][j] = ch;
            }
            else if (i == j){
                arr[i][j] = ch;
            }
            else {
                arr[i][j] = ' ';
            }
        }
    }
}

void printArray(char arr[][COLS], int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main(){
    
    const int ROWS = 4;
    const int COLS = 4;

    char ar[ROWS][COLS];
    
    fillCharArray(ar, 4, '*');
    printArray(ar, 4, 4);
    
    return 0;
}