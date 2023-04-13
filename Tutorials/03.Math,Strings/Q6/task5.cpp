#include<iostream>
using namespace std;

int main(){
    // 6: Write a C++ program to capitalize the first letter of each word in a given string. 
    // Words must be separated by only one space. 
    
    string sentence;
    cout << "Please enter your string: ", getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++)
    {
        if (i == 0){
            sentence[i] = toupper(sentence[i]);
        }
        else if (sentence[i - 1] == ' '){
            sentence[i] = toupper(sentence[i]);
        }
    }

    cout << sentence << endl;

    return 0;
}