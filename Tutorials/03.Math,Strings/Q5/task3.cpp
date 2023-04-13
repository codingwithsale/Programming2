#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // 5: Write a C++ program to reverse the string.

    string random, reversed;
    cout << "Please enter your string: ", cin >> random;

    for (int i = random.length() - 1; i >= 0; i--)
    {
        reversed += random[i];
    }

    cout << reversed << endl;
    
    return 0;
}