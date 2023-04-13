#include<iostream>
using namespace std;

int main(){
    const string password = "emina123";
    string user_att;
    int counter = 0;

    while (true){
        cout << "Enter the password: ";
        cin >> user_att;
        counter += 1;

        if (user_att == password)
        {
            cout << "Welcome!" << endl;
            break;
        } else if (user_att != password) 
        {
            cout << "Error message" << endl;

            if (counter < 5){
                cout << "Try again!" << endl;
            } else {
                cout << "Better luck next time!" << endl;
                break;
            }
        }
    }
    return 0;
}