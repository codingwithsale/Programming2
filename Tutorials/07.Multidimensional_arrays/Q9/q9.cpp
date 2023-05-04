#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 9: Write a C++ program that will reverse all strings in a three-dimensional array.

    string arr[2][2][2] = {
        {
            {"Salih", "Mirza"},
            {"Edhem", "Emina"}
        },
        {
            {"Emir", "Faris"},
            {"Ilma", "Ekrem"}
        }
    };

    for (int i = 0; i < 2; i++){            // elements
        for (int j = 0; j < 2; j++){        // rows
            for (int k = 0; k < 2; k++){    // columns
                string new_string;
                for (int z = arr[i][j][k].length() - 1; z >= 0; z--){
                    new_string += arr[i][j][k][z];
                }
                arr[i][j][k] = new_string;
                cout << arr[i][j][k] << ' ';
            }
        }
    }

    cout << endl;
    
    return 0;
}