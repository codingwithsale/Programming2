#include<iostream>
using namespace std;

int main(){
    // 12: Write a C++ program to print the message based on the grade you received.
    // A -  Excellent
    // B - Great
    // C -  Well done
    // D - You passed
    // F - Better try again

    char grade;

    cout << "Please enter your grade: ", cin >> grade, cout << endl;

    switch (grade){
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Great" << endl;
            break;
        case 'C':
            cout << "Well done" << endl;
            break;
        case 'D':
            cout << "You passed" << endl;
            break;
        case 'F':
            cout << "Better try again" << endl;
            break;
        
        default:
            cout << "Error" << endl;
            break;
    }
    return 0;
}