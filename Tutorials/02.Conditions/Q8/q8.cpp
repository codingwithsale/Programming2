#include<iostream>
using namespace std;

int main(){
    // 8: Write a C++ program that asks the user to enter password and check if the password is valid. 
    // Valid password is “Test124”.

    const string password = "Test124";

    string att;

    cout << "Please enter the password: ", cin >> att;

    if (att == password)
        cout << "Correct!";
    else
        cout << "Wrong :(";

    return 0;
}