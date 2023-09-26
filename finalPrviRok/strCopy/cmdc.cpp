#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void stringCopy(char d[], const char str[]){
    // Prvi nacin
    int i = 0;
    while (str[i] != '\0'){
        d[i] = str[i];
        i++;
    }

    // Drugi nacin
    for (int i = 0; i < 20; i++){
        d[i] = str[i];
    }
}

int main(){
    
    const char src[] = "Hello, World!";
    char dest[20];

    stringCopy(dest, src);

    std::cout << "Copied string: " << dest << endl;
    
    return 0;
}