#include<iostream>
using namespace std;

int main(){
    // 10: Write a program in C++ to find the last prime number that occurs before the entered number.

    int n, temp, counter = 0;

    cout << "Please, enter your number: ", cin >> n, cout << endl;
    temp = n;

    while (n > 1){
        for (int i = (n - 1); i > 1; i--)
        {
            if (n % i == 0)
                counter += 1;
        }
        if (counter == 0){
            cout << n << " is the biggest prime number after " << temp << endl;
            break;
        } else {
            counter = 0;
            n--;
            continue;
        }
    }
    return 0;
}