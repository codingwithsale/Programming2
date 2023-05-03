#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 1: Write C++ program to print index and the value found on that index.

    int array1[5] = {1, 2, 3, 4, 5};

    int size1 = sizeof(array1) / sizeof(int);

    for (int i = 0; i < size1; i++){
        cout << i << " : " << array1[i] << endl;
    }

    return 0;
}