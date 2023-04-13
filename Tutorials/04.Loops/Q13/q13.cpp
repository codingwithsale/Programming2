#include<iostream>
using namespace std;

int main(){
    // 13: Write a program in C++ to input any number and print it in words.

    int n, reversed = 0;
    cout << "Please enter your number: ", cin >> n;

    // Pisemo petlju kojom cemo okrenuti redoslijed cifara broja
    while (n != 0){
        reversed = (reversed * 10) + (n % 10);
        n = n / 10;
    }

    for (int i = reversed; i > 0; i = i / 10)
    {
        switch (i % 10)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << endl;
    return 0;
}