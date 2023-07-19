#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int stringLength(const char str[]){
    int length = 0;
    int i = 0;
    while (str[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

int main(){
    
    const char* someString = "Hello, World!";

    int length = stringLength(someString);

    std::cout << length << endl;
    
    return 0;
}