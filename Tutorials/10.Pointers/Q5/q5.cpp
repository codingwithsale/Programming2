#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main() {
    // 5: What is output of the following code?

    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    
    return 0;
}