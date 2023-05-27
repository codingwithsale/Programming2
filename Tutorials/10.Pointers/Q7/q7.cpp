#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void findMinMax(int* arr, int size, int* max, int* min) {
    if (arr == nullptr || size == 0)
        return;

    *max = *arr;  
    *min = *arr;  

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}

int main() {
    // 7: Write a function that finds the maximum and minimum values in an array using pointers.

    int arr[] = {9, 4, 2, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal, minVal;
    findMinMax(arr, size, &maxVal, &minVal);

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}