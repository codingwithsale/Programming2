#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

bool isPrime(int n, int k = 2){         // isPrime(number)  --> pozivanje
    if (n == 0 || n == 1){
        return false;
    }

    if (n % k == 0){
        return false;
    }

    if (k * k > n){
        return true;
    }
    
    return isPrime(n, k + 1);
}

int main(){
    // 5: Write a C++ program to check if the number is prime or not (using recursion).

    cout << isPrime(5) << endl;
    
    return 0;
}