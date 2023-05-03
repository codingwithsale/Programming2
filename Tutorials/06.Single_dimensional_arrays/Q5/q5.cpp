#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 5: Write C++ program to update every array element by multiplication of the next and previous values of given array of integers.

    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int new_arr[10];
    int size1 = sizeof(array1) / sizeof(int);

    cout << size1 << endl;

    for (int i = 0; i < size1; i++){
        int value;
        if (i == 0){
            value = array1[i] * array1[i + 1];
        }
        else if (i == size1 - 1){
            value = array1[size1 - 2] * array1[size1 - 1];
        }
        else {
            value = array1[i - 1] * array1[i + 1];
        }
        new_arr[i] = value;
    }

    for (int y: new_arr){
        cout << y << ' ';
    }
    
    cout << endl;

    return 0;
}