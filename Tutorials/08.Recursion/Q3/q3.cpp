#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int power_of_n(int num, int n){
    if (n <= 0){
        return 1;
    }
    else {
        return num * power_of_n(num, n - 1);
    }
}

int main(){
    // 3: Write a C++ program to number to the power of n (using recursion).

    cout << power_of_n(5, 3) << endl;
    
    return 0;
}