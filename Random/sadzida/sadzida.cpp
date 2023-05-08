#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

string uniqueCharacters(string str){
    string new_str;
    for (int i = 0; i < str.length(); i++){
        int counter = 0;
        for (int j = 0; j < new_str.length(); j++){
            if (str[i] == new_str[j]){
                counter++;
            }
        }
        if (counter == 0){
            new_str += str[i];
        }
    }
    return new_str;
};

int main(){
    
    string str1 = "abbccddde";

    cout << uniqueCharacters(str1);
    
    return 0;
}