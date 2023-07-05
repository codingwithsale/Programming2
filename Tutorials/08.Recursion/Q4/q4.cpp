#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

string reverse (string num, int len){
    if (len < 0){
        return "";
    }
    else {
        return num[len] + reverse(num, len - 1);
    }
}

int main(){
    // 4: Write a C++ program that will reverse the number using recursion.

    string str1;
    int n;
    cout << "Please enter the number: ", cin >> n;

    str1 = to_string(n);

    cout << reverse(str1, str1.length()) << endl;
    
    return 0;
}