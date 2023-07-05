#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Employee{
    public:
        string name;
        int salary, yearOfEmp;

        Employee(string input_name, int salary_input, int year){
            name = input_name;
            salary = salary_input;
            yearOfEmp = year;
        };

        void setYear(int new_year){
            yearOfEmp = new_year;
        };

        int getYear(){
            return yearOfEmp;
        };

        int years_of_service(){
            return 2023 - yearOfEmp;
        };

};

int main(){
    // 7: Write a C++ program to create a class called "Employee" with a name, salary, and hire date attributes, 
    // and a method to calculate years of service.

    Employee e1("Amela", 1000, 2020);

    cout << e1.years_of_service() << endl;
    
    return 0;
}