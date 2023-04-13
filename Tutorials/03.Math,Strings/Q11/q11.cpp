#include<iostream>
using namespace std;

int main(){
    // 11: Write a C++ program to reverse a number.

    int n, reversed = 0;
    cout << "Please enter your number: ", cin >> n; 

    while (n != 0){
        reversed = (reversed * 10) + (n % 10);
        n = n / 10;
    }

    cout << reversed << endl;
    
    return 0;
}