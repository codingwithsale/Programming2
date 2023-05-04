#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 5: Write a C++ program that will give us the maximum value inside a multidimensional array

    int arr[2][4] = {{1, 2, 3, 4}, {10, 89, 0, 1000}};
    int max_val = arr[0][0];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] > max_val){
                max_val = arr[i][j];
            }
        }
    }

    cout << "The max value in a multidimensional array is: " << max_val << endl;
    
    return 0;
}