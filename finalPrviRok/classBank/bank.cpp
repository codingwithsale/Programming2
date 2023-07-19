#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class BankAccount {
    private:
        double balance;
    public:
        string cardNumber;

        BankAccount(string cN, double b){
            cardNumber = cN;
            balance = b;
        }
        double getBalance(){
            return balance;
        }
        void deposit(double amount){
            balance += amount;
        }
        void withdraw(double amount){
            if (amount > balance){
                std::cout << "Insufficient funds" << endl;
            }
            else {
                balance -= amount;
            }
        }
};

int main(){
    
    BankAccount acc1("123455", 1000.0);

    acc1.deposit(500.0);
    std::cout << "Updated Balance: " << acc1.getBalance() << endl;

    acc1.withdraw(200.0);
    std::cout << "Updated Balance: " << acc1.getBalance() << endl;

    acc1.withdraw(1500.0);
    std::cout << "Updated Balance: " << acc1.getBalance() << endl;
    
    return 0;
}