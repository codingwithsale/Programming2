#include<iostream>
using namespace std;

int main(){
    // 7: Write a C++ program to count all the vowels in a given string.

    string random;
    int counter = 0;
    cout << "Please enter your string: ", getline(cin, random);

    for (int i = 0; i < random.length(); i++)
    {
        random[i] = tolower(random[i]);
        if (random[i] == 'a' || random[i] == 'e' || random[i] == 'i' || random[i] == 'o' || random[i] == 'u'){
            counter += 1;
        }
    }

    cout << "There is/are " << counter << " vowels in a given string." << endl;
    
    return 0;
}