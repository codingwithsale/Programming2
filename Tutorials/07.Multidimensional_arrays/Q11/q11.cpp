#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 11: Write a C++ program that will take integers as input from the user and 
    // will store their square root values into a three-dimensional array.

    int elements, rows, columns;
    cout << "Please enter the number of elements: ", cin >> elements;
    cout << "Please enter the number of rows: ", cin >> rows;
    cout << "Please enter the number of columns: ", cin >> columns;

    double arr[elements][rows][columns];

    for (int i = 0; i < elements; i++){
        for (int j = 0; j < rows; j++){
            for (int k = 0; k < columns; k++){
                double value;
                cout << "Please enter the value: ", cin >> value;
                arr[i][j][k] = sqrt(value);
            }
        }
    }

    for (int i = 0; i < elements; i++){
        for (int j = 0; j < rows; j++){
            for (int k = 0; k < columns; k++){
                cout << arr[i][j][k] << ' ';
            }
        }
    }

    cout << endl;
    
    return 0;
}