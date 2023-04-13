#include<iostream>
using namespace std;

int main(){
    // Question #3
    int n;
    cout << "Enter the specified number: ";
    cin >> n;

    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 3){
            cout << i << endl;
        }
    }
}