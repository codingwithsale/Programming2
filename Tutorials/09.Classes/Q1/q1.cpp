#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Car{
    public:
        string model;
        int year_created;
        string color;
        int price;
};

int main(){
    // 1: Create class Car and two objects of that class (Toyota and Peugeot). 
    // The class should have the following attributes: model, year_created, color and price.

    Car Toyota;
    Car Peugeot;

    Toyota.model = "Toyota RAV4";
    Toyota.year_created = 2007;
    Toyota.color = "Black";
    Toyota.price = 25000;

    Peugeot.model = "Peugeot 206";
    Peugeot.year_created = 2013;
    Peugeot.color = "Gray";
    Peugeot.price = 15000;

    cout << Toyota.model << endl;
    cout << Toyota.year_created << endl;
    cout << Toyota.color << endl;
    cout << Toyota.price << endl;
    cout << endl;
    cout << Peugeot.model << endl;
    cout << Peugeot.year_created << endl;
    cout << Peugeot.color << endl;
    cout << Peugeot.price << endl;

    
    return 0;
}