#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 2: Take 5 inputs from user and store them in an array.

    int array1[5], x;
    int size1 = sizeof(array1) / sizeof(int);

    for (int i = 0; i < size1; i++){
        cout << "Please enter your value: ", cin >> x;
        array1[i] = x;
    }

    for (int y: array1){
        cout << y << ' ';
    }
    
cout << endl;

    return 0;
}