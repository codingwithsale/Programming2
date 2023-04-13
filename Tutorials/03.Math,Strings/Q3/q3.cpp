#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // 3: Write a C++ program to check whether a given number is a power of two or not.

    int n;
    cout << "Please enter the number: ", cin >> n, cout << endl;

    for (int i = 0; i <= n; i++)
    {
        int temp = pow(2, i);
        if (temp == n){
            cout << "The given number is a power of two." << endl;
            break;
        }
        else if (temp > n)
        {
            cout << "Not!" << endl;
            break;
        }
    }
    return 0;
}