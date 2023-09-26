#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void sortArray(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    
    int numbers[] = {2, 1, 3, 6, 5};

    sortArray(numbers, 5);

    std::cout << "Sorted array: ";
    for (int i = 0; i < 5; ++i){
        std::cout << numbers[i] << ' ';
    }
    std::cout << endl;

    return 0;
}