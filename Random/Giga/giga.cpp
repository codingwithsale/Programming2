#include <iostream>
#include <cstring>
using namespace std;

int sumOfDigits(int n, int& even, int& odd){
    int temp;
    while (n != 0){
        temp = n % 10;
        if (temp % 2 == 0){
            even += temp;
        }
        else if (temp % 2 != 0){
            odd += temp;
        }
        n /= 10;
    }
    return even + odd;
}

int main(){

    int num = 123;
    int e = 0, o = 0;
    cout << sumOfDigits(num, e, o) << endl;
    cout << "even " << e << " odd " << o << endl;

    int num2 = 12345;
    int e2 = 0, o2 = 0;
    cout << sumOfDigits(num2, e2, o2) << endl;
    cout << "even " << e2 << " odd " << o2 << endl;

    return 0;
}

int sumOfDigits(int n, int& even, int& odd) {
    int temp;
    while (n != 0) {
        temp = n % 10;
        if (temp % 2 == 0) {
            even += temp;
        } else if (temp % 2 != 0) {
            odd += temp;
        }
        n /= 10;
    }
    return even + odd;
}

int main() {
    int num = 123;
    int e = 0, o = 0;
    cout << sumOfDigits(num, e, o) << endl;
    cout << "even " << e << " odd " << o << endl;

    int num2 = 12345;
    int e2 = 0, o2 = 0;
    cout << sumOfDigits(num2, e2, o2) << endl;
    cout << "even " << e2 << " odd " << o2 << endl;

    return 0;
}