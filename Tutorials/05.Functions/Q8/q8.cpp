#include<iostream>
using namespace std;

bool leapYear(int year){
    bool leap = false;
    if (year % 400 == 0){
        leap = true;
    }
    else if (year % 100 == 0 && year % 400 != 0){
        leap = false;
    }
    else if (year % 4 == 0){
        leap = true;
    }
    else{
        leap = false;
    }
    return leap;
}

int main(){
    // 8: Write a function in C++ to check if a year is a leap year or not.

    int year;
    cout << "Please enter the year you would like to test: ", cin >> year;
    
    cout << leapYear(year) << endl;
    
    return 0;
}