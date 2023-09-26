#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int reverseNumber(int num){

    int result = 0;
    int reminder = 0;
    while (num){
        reminder = num % 10;
        result = result * 10 + reminder;
        num /= 10;
    }
    return result;
    
}

int main(){

    cout << reverseNumber(123) << endl;
    cout << reverseNumber(54321) << endl;
    cout << reverseNumber(0) << endl;
    cout << reverseNumber(-123) << endl;

    
    return 0;
}