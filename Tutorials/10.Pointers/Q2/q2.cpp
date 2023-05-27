#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main() {
    // 2: Add all values from array using pointers.

    int myarr[] = {1, 2, 3, 4, 5};
    int* arr_ptr = myarr;
    int sum = 0;

    for (int i = 0; i < 5; i++){
        sum += *arr_ptr;
        arr_ptr++;
    }

    cout << sum << endl;
    
    return 0;
}