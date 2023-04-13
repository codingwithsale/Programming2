#include<iostream>
using namespace std;

bool separatedByTwo(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'e' || str[i] == 'E'){
            if (str[i + 3] == 'g' || str[i + 3] == 'G'){
                return true;
            }
        }
    }
    return false;
}

int main(){
    // Question 4:

    string x;
    cout << "Please enter the string: ", cin >> x;

    cout << separatedByTwo(x) << endl;

    return 0;
}