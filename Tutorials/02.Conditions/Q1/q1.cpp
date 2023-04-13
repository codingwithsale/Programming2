#include<iostream>
using namespace std;

int main(){
    // 1: Write a C++ program to convert Celsius into Fahrenheit. 
    // Formula: 1.8C + 32

    float temp_in_c, temp_in_f;

    cout << "Please enter the temperature in Celsius: ";
    cin >> temp_in_c;

    temp_in_f = 1.8 * temp_in_c + 32;

    cout << temp_in_c << " degrees in Celsius is equal to " << temp_in_f << " degrees in Fahrenheit." << endl;

    return 0;
}