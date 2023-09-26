#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

string secondSmallestString(string arr[], int size){
    int new_arr[size];
    string result;

    for (int i = 0; i < size; i++){
        new_arr[i] = arr[i].length();
    }

    // Sort
    int temp;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (new_arr[j] > new_arr[j + 1]){
                temp = new_arr[j];
                new_arr[j] = new_arr[j + 1];
                new_arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++){
        if (arr[i].length() == new_arr[1]){
            result = arr[i];
        }
    }

    return result;
}

int main(){
    
    string array[6] = {"Ajdin", "Iman", "Una", "Tin", "Hajrudin", "selma"};

    cout << secondSmallestString(array, 6) << endl;

    return 0;
}