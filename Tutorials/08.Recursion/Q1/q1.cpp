#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int sum_until(int n){
    if (n <= 0){
        return 0;
    }
    else {
        return n + sum_until(n - 1);
    }
};

int main(){
    // 1: Write a C++ program that will find sum of numbers until user specified number (using recursion).
    
    cout << sum_until(5) << endl;

    return 0;
}