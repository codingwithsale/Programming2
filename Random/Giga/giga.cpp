#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // Ja sam peder
    // Output : aJay amsay ederpay

    string str = "Ja sam peder", new_str;
    int counter = 0;
    string random;

    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' '){
            counter++;
            random += str[i];
        }
        else if (str[i] == ' ') {
            for (int j = 1; j < counter; j++){
                new_str += random[j];
            }
            new_str += random[0];
            new_str += "ay ";
            random = "";
            counter = 0;
        }

        if (i == str.length() - 1){
            for (int j = 1; j < counter; j++){
                new_str += random[j];
            }
            new_str += random[0];
            new_str += "ay";
        }
    }

    cout << new_str << endl;
    
    return 0;
}