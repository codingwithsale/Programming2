#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // 4: Write a C++ program to count the total number of digits 1 appearing in all positive 
    // integers less than or equal to a given integer n.
    
    int n, total = 0;
    cout << "Please enter the number: ", cin >> n, cout << endl;
    string converted_number;

    for (int i = 0; i <= n; i++)
    {
        converted_number = to_string(i);
        for (int j = 0; j < converted_number.length(); j++)
        {
            if (converted_number[j] == '1'){
                total += 1;
            }
        }
        
    }

    cout << "The number of ones is: " << total << endl;

    return 0;
}