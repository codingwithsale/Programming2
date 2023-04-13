#include<iostream>
using namespace std;

int main(){
    // 9: Write a C program to convert 6 hours 40 minutes into seconds.

    int hours = 6, minutes = 40, seconds;

    seconds = hours * 60 * 60 + minutes * 60;

    cout << "6 hours and 40 minutes in seconds ---> " << seconds << endl;

    return 0;
}