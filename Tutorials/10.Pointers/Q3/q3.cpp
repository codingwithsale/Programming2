#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void addBy5(int* a, int* b) {
    *a = *a + 5;
    *b = *b + 5;
};

int main() {
    // 3: Write a function that accepts 2 arguments (passed by reference with pointer argument). 
    //    The function should change the initial value of variables to new values. 
    //    Function is a void function.

    int x = 10;
    int y = 15;

    cout << x << endl;
    cout << y << endl;

    addBy5(&x, &y);

    cout << x << endl;
    cout << y << endl;
    
    return 0;
}