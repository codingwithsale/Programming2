#include<iostream>
using namespace std;

int main(){
    // 3: Ask the user to enter 3 numbers and then create a simple calculator application. 
    // Your calculator should:
    // a) find the sum of three numbers
    // b) find the difference of three numbers
    // c) multiply first two numbers and then subtract third one
    // d) divide last two numbers and add the first one

    double a, b, c, sum, diff, option3, option4;

    cout << "Please enter the first number: ";
    cin >> a;

    cout << "Please enter the second number: ";
    cin >> b;

    cout << "Please enter the third number: ";
    cin >> c;

    sum = a + b + c;
    diff = a - b - c;
    option3 = a * b - c;
    option4 = b / c + a;

    cout << "The sum of numbers is " << sum << endl;
    cout << "The difference of numbers is " << diff << endl;
    cout << "The result of option3 is " << option3 << endl;
    cout << "The result of option4 is " << option4 << endl;

    return 0;
}