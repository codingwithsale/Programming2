#include<iostream>
using namespace std;

int test(int x, int y)
{
    int digit_sum = 0;
    for(int i = x; i <= y; ++i)
    {
        int p = i;
        while(p > 0)
        {
            digit_sum += p % 10;
            p /= 10;
        }
    }
    return digit_sum;
}

int sumOfDigitsBetweenNumbers(int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

int main(){
    // 7: Write a C++ function to find some of all digits between two numbers (both included).
    
    int x, y;
    cout << "Please enter the number that represents the starting point: ", cin >> x;
    cout << "Please enter the number that represents the ending point: ", cin >> y;

    cout << sumOfDigitsBetweenNumbers(x, y) << endl;
    cout << test(x, y) << endl;

    return 0;
}