#include <iostream>

using namespace std;

int secondSmallestNumber (int array[], int size) {

    int smallest = array[0];
    int secondSmallest = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == smallest) {
            continue;
        }
        else if (array[i] < secondSmallest) {
            secondSmallest = array[i];
        }
    }
    return secondSmallest;
}
int main(){
    int arr[5] = {25,24,18,41,6};

    std::cout << secondSmallestNumber (arr, 5) << endl;

    return 0;
}