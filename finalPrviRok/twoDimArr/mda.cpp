#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void multiplyGrid(int arr[][COLS], int f){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            arr[i][j] *= f;
        }
    }
}

void rowSums(int arr[][COLS], int sums[]){
    for (int i = 0; i < ROWS; i++){
        int sum = 0;
        for (int j = 0; j < COLS; j++){
            sum += arr[j][i];
        }
        sums[i] = sum;
    }
}

int main(){

    int grid[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int factor = 2;
    int rowSum[ROWS];

    // multiplyGrid(grid, factor);
    rowSums(grid, rowSum);

    for (int i = 0; i < ROWS; i++){
        std::cout << rowSum[i] << ' ';
    }
    std::cout << endl;
    
    return 0;
}