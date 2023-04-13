#include<iostream>
using namespace std;

int main(){
    // 9: Write a C++ program that asks the user for the name and prints out Hello NAME!

    string name;

    cout << "Please enter your name: ", cin >> name, cout << endl;
    cout << "Hello " << name << "!" << endl;

    return 0;
}