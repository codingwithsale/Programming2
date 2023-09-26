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

    int smallest = new_arr[0];
    int secSmallest = new_arr[0];
    for (int i = 0; i < size; i++){
        if (new_arr[i] < smallest){
            smallest = new_arr[i];
        }
    }
    for (int i = 0; i < size; i++){
        if (new_arr[i] == smallest){
            continue;
        }
        else if (new_arr[i] < secSmallest){
            secSmallest = new_arr[i];
        }
    }

    for (int i = 0; i < size; i++){
        if (arr[i].length() == secSmallest){
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