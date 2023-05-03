#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

double average1(int array1[6], int size1){
    double sum = 0;
    double average = 0.0;
    for (int i = 0; i < size1; i++){
        sum += array1[i];
    }
    average = sum / size1;

    return average;
}

int main(){
    // 6: Write C++ function to find the average of all values in an array.

    int arr[6] = {5, 4, 5, 3, 5, 5};
    int size0 = sizeof(arr) / sizeof(int);

    cout << average1(arr, size0) << endl;
    
    return 0;
}