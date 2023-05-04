#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 1: Write a C++ program that will check whether your multidimensional array has even numbers, and if yes, replace them with zeros.

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (arr[i][j] % 2 == 0){
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << ' ';
        }
    }

    cout << endl;
    
    return 0;
}