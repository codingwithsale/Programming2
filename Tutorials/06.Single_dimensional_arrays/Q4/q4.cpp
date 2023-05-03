#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 4: Write C++ program to count the number of occurrences of specific element in array.

    int array1[10] = {1, 3, 2, 3, 3, 3, 4, 4, 3, 4};
    int size1 = sizeof(array1) / sizeof(int);
    int el, counter = 0;

    cout << "Please enter the specific element: ", cin >> el;

    for (int i = 0; i < size1; i++){
        if (array1[i] == el){
            counter++;
        }
    }

    cout << counter << endl;
    
    return 0;
}