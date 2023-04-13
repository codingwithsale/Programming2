#include<iostream>
using namespace std;

int main(){
    // 10: Write a C++ program to check whether a given string is a subsequence of another given string. 
    // Return 1 for true and 0 for false.

    string random1, random2;
    cout << "Please enter your string: ", getline(cin, random1);
    cout << "Please enter your substring: ", getline(cin, random2);
    int counter = 0;

    for (int i = 0; i < random2.length(); i++)
    {
        if (random1[counter] == random2[i]){
            counter++;
        }
    }
    
    bool result = (counter == random2.length()) ? true : false;

    cout << result << endl;
    
    return 0;
}