#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 4: Write a C++ program that will calculate the sum and average of all values in a multidimensional array.

    int arr[2][4] = {{5, 5, 5, 3}, {3, 3, 3, 5}};
    double sum = 0, average, counter;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            sum += arr[i][j];
            counter++;
        }
    }

    cout << "Sum of all elements: " << sum << ". Average of all elements: " << sum / counter << '.' << endl;
    
    return 0;
}