#include<iostream>
using namespace std;

int main(){
    // 12: Write a program in C++ to find the frequency of each digit in a given integer.

    int number;
    cout << "Please enter your integer: ", cin >> number;

    for (int i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " is ";
        int counter = 0;
        int r = 0;

        for (int j = number; j > 0; j = j / 10)
        {
            r = j % 10;
            if (r == i){
                
                counter += 1;
            }
        }
        cout << counter << endl;
    }
    return 0;
}