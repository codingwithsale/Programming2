#include<iostream>
using namespace std;

bool prime_number(int n){
    int counter = 0;
    for (int i = 2; i < n; i++)
        {
            if (n % i == 0){
                counter += 1;
            }
        }
        
    if (counter == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    // Question 1: Check weather the number is prime or not!

    int x;
    cout << "Please enter your number: ", cin >> x;

    cout << prime_number(x) << endl;

    return 0;
}