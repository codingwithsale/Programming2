#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void reversed(int array1[], int size1){
    int new_array[size1], j = 0;
    for (int i = size1 - 1; i >= 0; i--){
        new_array[j] = array1[i];
        j++;
    }

    cout << '{';

    for (int i = 0; i < size1; i++){
        if (i < size1 - 1)
            cout << new_array[i] << ", ";
        else 
            cout << new_array[i];
    }

    cout << '}';
}

int main(){
    // 7: Write C++ function to reverse elements in an array.

    int arr[5] = {1, 2, 3, 4, 5};
    int size0 = sizeof(arr) / sizeof(int);

    reversed(arr, size0);

    cout << endl;

    return 0;
}