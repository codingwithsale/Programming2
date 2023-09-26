#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void kLargest(int arr[], int size, int k){
    int temp;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int array[8] = {4, 5, 9, 12, 9, 22, 45, 7};

    kLargest(array, 8, 4);
}