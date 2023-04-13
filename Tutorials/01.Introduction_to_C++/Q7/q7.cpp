#include<iostream>
using namespace std;

int main(){
    // 7: Write a C program to ask user to enter length and width of rectangle. Find area of that rectangle.

    double l, w, a;

    cout << "Please enter the lenght of rectengle: ";
    cin >> l;

    cout << "Please enter the width of rectengle: ";
    cin >> w;

    a = l * w;

    cout << "The area of rectengle is: " << a << endl;

    return 0;
}