#include<iostream>
using namespace std;

int main(){
    // 6: Write a C++ program that reads two integers and checks if they are multiplied or not.
    // Test Data :
    // Input the first number: 5 
    // Input the second number: 15
    // Expected Output: Multiplied! 

    int a, b;

    cout << "Please enter the first number: ", cin >> a;
    cout << "Please enter the second number: ", cin >> b;

    if (a > b){
        if (a % b == 0)
            cout << "Multiplied";
        else
            cout << "Nope";
    } else if (a < b){
        if (b % a == 0)
            cout << "Multiplied";
        else
            cout << "Nope";
    } else 
        cout << "The numbers are equal -> Multiplied!";

    return 0;
}