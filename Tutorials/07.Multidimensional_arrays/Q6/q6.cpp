#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 6: Write a C++ program that will return the length of each string in a multidimensional array.

    string arr[2][3] = {{"John", "Amelia", "Beverly"}, {"Carl", "Mario", "Evelyn"}};
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << "Length of " << arr[i][j] << " is " << arr[i][j].length() << endl;
        }
    }
    
    return 0;
}