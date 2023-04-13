#include<iostream>
using namespace std;

int main(){
    // 8: Write a program in C++ to find the factorial of a number.

    int n, factorial = 1;

    cout << "Please enter the number: ", cin >> n, cout << endl;

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;
    
    
    return 0;
}