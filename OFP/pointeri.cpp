#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;
using std::cout;
using std::cin;

void reverseArray1(int list[], int size){
    for (int i = 0, j = size - 1; i < j; i++, j--){
        int temp = list[j];
        list[j] = list[i];
        list[i] = temp;
    }
}

void reverseArray2(int list[], int size){
    int new_list[size];
    int j = 0;

    for (int i = size - 1; i >= 0; i--){
        new_list[j] = list[i];
        j++;
    }

    for (int i = 0; i < size; i++){
        list[i] = new_list[i];
    }
}

void add7(int* a, int* b){
    *a += 7;
    *b += 7;
}

void reverseString(char str[]){
    int size = strlen(str);
    for (int i = 0, j = size - 1; i < j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void findMinMax(int arr[], int s, int& min, int& max){
    min = 999;
    max = 0;
    for (int i = 0; i < s; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
}

int main(){
    
    // #7: Write a function that finds the maximum and minimum values in an array using pointers.

    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    int a, b;

    findMinMax(array, size, a, b);

    std::cout << "Min: " << a << endl;
    std::cout << "Max: " << b << endl;
    
    return 0;
}