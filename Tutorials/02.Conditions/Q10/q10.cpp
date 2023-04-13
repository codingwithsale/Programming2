#include<iostream>
using namespace std;

int main(){
    // 10: Write a C++ program that asks the user for the number between 1 and 7 and converts the number to the day in the week.

    int n;

    cout << "Please enter the number: ", cin >> n;

    switch (n)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "The given number doesn't connect to a day in week!" << endl;
        break;
    }

    return 0;
}