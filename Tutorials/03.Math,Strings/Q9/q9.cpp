#include<iostream>
using namespace std;

int main(){
    // 9: Write a C++ program to change the case of each character in a given string.

    string random;
    cout << "Please enter your string: ", getline(cin, random);

    for (int i = 0; i < random.length(); i++)
    {
        if (isupper(random[i])){
            random[i] = tolower(random[i]);
        }
        else if (islower(random[i])){
            random[i] = toupper(random[i]);
        }
    }
    
    cout << random << endl;
    
    return 0;
}