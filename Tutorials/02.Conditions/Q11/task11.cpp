#include<iostream>
using namespace std;

int main(){
    // 11: Write a C++ program to simulate calculator behavior using switch - case.

    double a, b;
    char operation;

    cout << "Please enter the first number: ", cin >> a;
    cout << "Please enter the second number: ", cin >> b, cout << endl;
    cout << "Please enter the math operation: ", cin >> operation, cout << endl;

    switch (operation)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    
    default:
        cout << "Error" << endl;
        break;
    }
    return 0;
}