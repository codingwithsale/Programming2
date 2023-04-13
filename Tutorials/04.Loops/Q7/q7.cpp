#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // Question 7

    int n;
    double sum = 0;
    cout << "Enter the number: ", cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        sum += 1/pow(i, i);
    }
    cout << sum << endl;
}