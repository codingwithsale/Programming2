#include<iostream>
using namespace std;

void chech_password(string input_pass){

    const string real_pass = "labgroup";

    while (1){
        if (input_pass == real_pass){
            cout << "Correct password!" << endl;
            break;
        }
        else{
            cout << "Please try again: ", cin >> input_pass;    
        }
    }
}

int main(){
    // Question 2: 

    string x;
    cout << "Please enter your password: ", cin >> x;

    chech_password(x);
    
    return 0;
}