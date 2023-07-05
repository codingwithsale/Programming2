#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        Person(string n, int a){
            name = n;
            age = a;
        };

        string getName(){
            return name;
        };
};

int main(){
    // 8: Write a C++ program to create a class called "Person" with a name and age attribute. 
    // Create two instances of the "Person" class, set their attributes using the constructor, and print their name and age. 

    Person p1("Mirza", 21);
    Person p2("Ajdin", 22);

    cout << p1.getName() << endl;
    cout << p2.getName() << endl;
    
    return 0;
}