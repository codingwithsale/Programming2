#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int minElement(int a1[], int a2[], int s){
    int min1 = a1[0], min2 = a2[0], min = 999;

    for (int i = 1; i < s; i++){
        if (a1[i] <= min1){
            min1 = a1[i];
        }

        if (a2[i] <= min2){
            min2 = a2[i];
        }

        if (min1 < min){
            min = min1;
        }
        if (min2 < min){
            min = min2;
        }
    }

    return min;

};

int main(){
    
    int arr1[5] = {5, 6, 7, 2, 9};
    int arr2[5] = {10, 20, 100, 50, 1000};
    int size = sizeof(arr1) / sizeof(int);
    
    cout << minElement(arr1, arr2, size) << endl;

    return 0;
}