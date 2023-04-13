#include<iostream>
using namespace std;

int main(){
    // 5: Write a C++ program that reads an integer and check the specified range where it belongs (0-20;21-50;51-80;).
    // Print an error message if the number is negative or greater than 80.

    int n;

    cout << "Please enter the number: ", cin >> n, cout << endl;

    if (n >= 0 && n <= 80){
        if (n >= 0 && n <= 20)
            cout << "The number is in range 0-20" << endl;
        else if (n >= 21 && n <= 50)
            cout << "The number is in range 21-50" << endl;
        else if (n >= 51 && n <= 80)
            cout << "The number is in range 51-80" << endl;
    } else 
        cout << "Error" << endl;

    return 0;
}