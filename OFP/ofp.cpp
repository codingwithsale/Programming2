#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

const int COLS = 3;
const int ROWS = 3;

void calculateRowSum(int arr[ROWS][COLS], int rowSums[]){
    for (int i = 0; i < ROWS; i++){
        int sum = 0;
        for (int j = 0; j < COLS; j++){
            sum += arr[i][j];
        }
        rowSums[i] = sum;
    }
};

int main(){

    int grid[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSums[ROWS];

    calculateRowSum(grid, rowSums);

    for (int i = 0; i < ROWS; i++){
        std :: cout << rowSums[i] << ' ';
    }

    std :: cout << endl;

    return 0;
}