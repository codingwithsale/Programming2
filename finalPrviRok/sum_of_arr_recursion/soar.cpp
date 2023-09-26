#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int sum_of_array(int arr[], int size){
    if (size == 0){
        return 0;
    } else {
        return arr[size - 1] + sum_of_array(arr, size - 1);
    }
}


int main(){
    
    int array[5] = {1, 2, 3, 4, 5};
    cout << sum_of_array(array, 5) << endl;
    cout << sum_of_array(array, 3) << endl;
    cout << sum_of_array(array, 0) << endl;
    
    return 0;
}