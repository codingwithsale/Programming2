#include<iostream>
using namespace std;

bool palindrome(string word){
    bool palindrome = false;
    string reversed;

    for (int i = word.length() - 1; i >= 0; i--)
    {
        reversed += word[i];
    }
    
    if (reversed == word){
        palindrome = true;
    }

    return palindrome;
}

int main(){
    // 9: Write a function to check if a word is palindrome or not.

    string word1;
    cout << "Please enter the word you would like to test: ", cin >> word1;

    cout << palindrome(word1) << endl;
    
    return 0;
}