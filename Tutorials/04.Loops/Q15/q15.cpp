#include<iostream>
using namespace std;

int main(){
    // 15: Write a program in C++ to display the multiplication table vertically from 1 to n.

    int n;
    cout << "Please enter the n: ", cin >> n;

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= n; j++){
            cout << j << " * " << i << " = " << i * j << "  ";
        }
        cout << endl;
    }
    
    return 0;
}