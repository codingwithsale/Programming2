#include<iostream>
using namespace std;

int main(){
    // 8: Write a C program to swap the values of 2 variables.

    int a = 10, b = 15, temp;

    cout << "Before swapping: " << endl;
    cout << "a is equal to: " << a << endl;
    cout << "b is equal to: " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << endl << "After swapping: " << endl;
    cout << "a is equal to: " << a << endl;
    cout << "b is equal to: " << b << endl;

    return 0;
}