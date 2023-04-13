#include<iostream>
#include<cmath>
using namespace std;

void cubeUpNumber(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << "Number is " << i << " and the cube of " << i << " is " << pow(i, 3) << endl;
    }
    
}

int main(){
    // Question 3: 

    int x;
    cout << "Input the number of terms: ", cin >> x;

    cubeUpNumber(x);

    return 0;
}