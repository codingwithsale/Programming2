#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 10: Write a C++ program that will check whether a string inside a three-dimensional array is a palindrome if not. 
    // If yes, replace the string with the sentence  “This is a palindrome”.

    string arr[2][2][2] = {
        {
            {"Salih", "Mirza"},
            {"ana", "Emina"}
        },
        {
            {"Emir", "Faris"},
            {"Ilma", "Ekrem"}
        }
    };

    for (int i = 0; i < 2; i++){            // elements
        for (int j = 0; j < 2; j++){        // rows
            for (int k = 0; k < 2; k++){    // columns
                string reversed, word = arr[i][j][k];
                for (int z = word.length() - 1; z >= 0; z--){
                    reversed += word[z];
                }
                if (word == reversed){
                    arr[i][j][k] = "This is a palindrome";
                }
                cout << arr[i][j][k] << ' ';
            }
        }
    }
    
    cout << endl;

    return 0;
}