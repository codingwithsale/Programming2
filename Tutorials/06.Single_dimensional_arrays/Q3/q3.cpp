#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 3: Display sum and average of array elements.

    int array1[5] = {1, 10, 4, 8, 17};
    int size1 = sizeof(array1) / sizeof(int);
    int sum = 0;
    double average;

    for (int i = 0; i < size1; i++){
        sum += array1[i];
    }

    average = double(sum) / size1;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
     
    return 0;
}