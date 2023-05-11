#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int fiboncci (int n){
    if (n == 0 || n == 1){
        return n;
    }
    else {
        return (fiboncci(n - 1) + fiboncci(n - 2));
    }
}

int main(){
    // 2: Write a C++ program that will find Fibonacci series until user specified number using recursion.

    int i = 0, value = 15;

    while (i <= value){
        cout << fiboncci(i) << ", ";
        i++;
    }
    
    cout << endl;
    
    return 0;
}