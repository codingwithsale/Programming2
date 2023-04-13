#include<iostream>
using namespace std;

int main(){
    // 4: Write a C++ program to find the third angle of a triangle.

    float x, y, z;

    cout << "Please enter the first angle: ", cin >> x;
    cout << "Please enter the second angle: ", cin >> y;

    z = 180 - x - y;

    cout << endl << "The third angle of triangle is: " << z << endl;

    return 0;
}