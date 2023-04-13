#include<iostream>
using namespace std;

int main(){
    // 9: Write a program in C++ to find the sum of the digits of a given number.

    int n, sum = 0, digit, temp;

    cout << "Please enter your number: ", cin >> n, cout << endl;

    temp = n;

    while (n != 0){
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    cout << "The sum of digits of " << temp << " is " << sum << endl;

    return 0;
}