#include<iostream>
using namespace std;

int main(){
    // 14: Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

    int n, sum = 0;
    cout << "Please enter the value of n: ", cin >> n, cout << endl;

    for (int i = 1; i <= n; i++){
        sum = sum + (i * i);
    }

    cout << "The sum of a given series is " << sum << endl;
    
    return 0;
}