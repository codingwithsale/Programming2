#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void count_vowels(const char* str, int* counter) {
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
            (*counter)++;
        }
        str++;
    }
    cout << *counter << endl;
}

int main() {
    char input[100];
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin >> input;

    count_vowels(input, &vowelCount);

    return 0;
}