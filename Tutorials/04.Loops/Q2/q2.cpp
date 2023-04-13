#include<iostream>
using namespace std;

int main(){
    // Question #2 on 03.Loops(lab)
    int n;
    cout << "Enter the specified number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0){
            cout << i*i << endl;
        }
    }
    
}