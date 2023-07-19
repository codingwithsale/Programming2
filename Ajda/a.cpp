#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int sumFibonacci(int n){
    int sum = 0;
    if (n == 0 || n == 1){
        sum = 0;
        return sum;
    }
    int f1 = 0, f2 = 1, temp;
    for (int i = 2; i <= n; i++){
        sum += f2;
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return sum;
};

int sumOfDigits(int n, int& even, int& odd){
    int sum = 0;
    while (n > 0){
        int rem = n % 10;
        if (rem % 2 == 0){
            even += rem;
        }
        else if (rem % 2 != 0){
            odd += rem;
        }
        n /= 10;
    }
    sum = even + odd;
    return sum;
}

int secondLargest(int array[], int s){
    int lar1 = array[0], lar2 = array[0];
    for (int i = 1; i < s; i++){
        if (array[i] > lar1){
            lar1 = array[i];
        }
    }

    for (int i = 0; i < s; i++){
        if (array[i] == lar1){
            continue;
        }
        else if (array[i] > lar2){
            lar2 = array[i];
        }
    }
    return lar2;
}

int main(){

    int value = 10;
    int *ptr = &value;

    std::cout << "Value: " << *ptr << endl;
    
    return 0;
}