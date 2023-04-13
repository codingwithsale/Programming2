#include<iostream>
using namespace std;

int main(){
    // 8: Write a C++ program to count all the words in a given string.

    string random;
    int spaces = 0;
    cout << "Please enter your string: ", getline(cin, random);

    for (int i = 0; i < random.length(); i++)
    {
        if (random[i] == ' '){
            spaces += 1;
        }
    }

    cout << "In a given string, there is/are " << (spaces + 1) << " word(s)." << endl;
    
    return 0;
}