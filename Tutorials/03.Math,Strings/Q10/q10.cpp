#include<iostream>
using namespace std;

int main(){
    // 10: Write a C++ program to check whether a given string is a subsequence of another given string. 
    // Return 1 for true and 0 for false.

    string random1, random2;
    cout << "Please enter your string: ", getline(cin, random1);
    cout << "Please enter your substring: ", getline(cin, random2);
    int j = 0;
    bool flag = false;

    for (int i = 0; i < random1.length(); i++)
    {
        if (random1[i] != random2[j]){
            j = 0;
        }
        else if (random1[i] == random2[j]){
            j++;
        }
        
        if (j >= random2.length()){
            flag = true;
            break;
        }
    }
    
    cout << flag << endl;
    
    return 0;
}