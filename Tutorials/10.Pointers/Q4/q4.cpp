#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void reverseString(char* my_pyt) {
    for (int i = 4; i >= 0; i--){
        cout << my_pyt[i];
    }
    cout << endl;
};

int main() {
    // 4: Write C++ program to reverse string using pointers.

    char name[] = "Salih";
    
    char* my_str = name;

    reverseString(my_str);
    
    return 0;
}