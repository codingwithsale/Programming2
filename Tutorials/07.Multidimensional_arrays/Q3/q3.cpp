#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 3: Write a C++ program that will ask the user to enter values into a multidimensional array.

    int rows, columns, value;
    cout << "Please enter the number of rows and columns: ", cin >> rows >> columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << "Please enter the value: ", cin >> value;
            arr[i][j] = value;
        }
    }

    cout << endl;

    cout << "Array looks like this: " << endl;
    cout << '{';
    for (int i = 0; i < rows; i++){
        cout << '{';
        for (int j = 0; j < columns; j++){
            if (j == columns - 1){
                cout << arr[i][j] << '}';
            }
            else
                cout << arr[i][j] << ", ";
        }
        if (i == rows - 1)
            cout << "}";
        else 
            cout << ", ";
    }

    cout << endl;

    return 0;
}