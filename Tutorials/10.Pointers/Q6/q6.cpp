#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main() {
    // 6: What is the output of the following code?

    int arr[] = {4, 5, 6, 7};
    int* p = (arr + 1);
    
    cout << *arr + 10 << endl;
    
    return 0;
}