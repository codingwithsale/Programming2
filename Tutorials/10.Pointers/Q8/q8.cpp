#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void swapIntegers(int* a, int* b) {
    if (a == nullptr || b == nullptr)
        return;

    int temp = *a;  
    *a = *b;       
    *b = temp;   
}

int main() {
    // 8: Write a function that swaps the values of two variables using pointers.

    int x = 5;
    int y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapIntegers(&x, &y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}