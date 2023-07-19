#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void reverseArray(int* arr, int size){
    for (int i = 0, j = size - 1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
};

int main(){
    
    int numbers[] = {1, 2, 3, 7, 9};

    reverseArray(numbers, 5);

    for (int i = 0; i < 5; i++){
        std::cout << numbers[i] << ' ';
    }
    std::cout << endl;
    
    return 0;
}