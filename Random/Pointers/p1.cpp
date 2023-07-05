#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    /*

    int count = 5;
    int* pCount = &count;

    cout << *pCount << endl;

    count++;

    cout << *pCount << endl;

    */

    /*

    int x = 0;
    int y = 5;

    int* pX = &x;
    int* pY = &y;

    pX = pY;

    cout << *pX << endl;
    cout << *pY << endl;

    cout << x << endl;
    cout << y << endl;

    */



    int list[6] = {11, 12, 13, 14, 15, 16};

    int* pList = list;

    int size = sizeof(list) / sizeof(int);

    while (size > 0){
        cout << *pList << ' ';
        pList++;
        size--;
    }

    cout << endl;




    
    return 0;
}