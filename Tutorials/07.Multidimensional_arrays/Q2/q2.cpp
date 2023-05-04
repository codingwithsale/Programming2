#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 2: Write a C++ program that will check the occurence of a certain element in a multidimensional array.

    int arr[3][3] = {{6, 2, 3}, {4, 5, 6}, {7, 6, 9}};
    int el, counter = 0;
    cout << "Please enter the value you would like to check: ", cin >> el;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (arr[i][j] == el){
                counter++;
            }
        }
    }

    cout << "The value " << el << " appears " << counter << " times." << endl;
    
    return 0;
}