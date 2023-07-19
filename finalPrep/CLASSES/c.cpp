#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

void swap(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
};

int main(){

    int x = 5, y = 10;

    swap(&x, &y);

    cout << x << ' ' << y << endl;
    
    
    return 0;
}