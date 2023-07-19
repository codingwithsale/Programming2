#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void add_2(int* array, int size) {
    //write function body 
    for (int i = 0; i < size; i++){
        *array += 2;
        array++;
    }
}

int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};

    add_2(arr, 5);

    for (int i = 0; i < 5; i++){
        cout << arr[i] << ' ' ;
    }

    cout << endl;
    
}