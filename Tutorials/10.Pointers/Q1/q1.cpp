#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main() {
    // 1: Print out values of an array using pointers.

    int myarr[] = {1, 2, 3, 4, 5};
    int* arr_ptr = myarr;

    for (int i = 0; i < 5; i++){
        cout << *arr_ptr << " ";
        arr_ptr += 1;
    }

    cout << endl;

    return 0;
}