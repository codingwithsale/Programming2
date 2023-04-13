#include<iostream>
using namespace std;

int main(){
    int number;
    int counter = 0;
    int sum = 0;
    
    while (counter < 10){
        counter += 1;
        cout << "Enter the number: ", cin >> number;
        if (number >= 0){
            sum += number;
        } else if (number < 0){
            cout << sum << endl;
            break;
        }
        if (counter == 10){
            cout << sum << endl;
        }
    }
}