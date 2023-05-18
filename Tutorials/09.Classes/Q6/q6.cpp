#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Calculator{
    public:
        double num1, num2;

        Calculator(double n1, double n2){
            num1 = n1;
            num2 = n2;
        };

        double sum(){
            return num1 + num2;
        };
        double multiply(){
            return num1 * num2;
        };
        double difference(){
            return num1 - num2;
        };
        double divide(){
            return num1 / num2;
        };
};

int main(){
    // 6: Create a class with the name “Calculator”. 
    // The class should take two parameters and it allows the user to add, subtract, divide and multiply the two numbers. 
    // The methods that you need to implement are sum, divide, multiply and difference.

    Calculator calc1(15, 5);

    cout << calc1.sum() << endl;
    cout << calc1.difference() << endl;
    cout << calc1.multiply() << endl;
    cout << calc1.divide() << endl;
    
    return 0;
}