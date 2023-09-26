#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Employee{
    public:
        string name;
        string surname;
        int salaries[12];

        Employee(string n, string s){
            name = n;
            surname = s;
        }

        void addSalary(int month, int value){
            salaries[month - 1] = value;
        }

        double averageSalary(){
            double sum = 0;
            for (int i = 0; i < 12; i++){
                sum += salaries[i];
            }
            double avg = sum / 12;
            return avg;
        }

        void raiseSalary(double percentage){
            for (int i = 0; i < 12; i++){
                salaries[i] =  salaries[i] + salaries[i] * (percentage / 100);
            }
        }

        void showEmployee(){
            cout << name << ' ' << surname << endl;
            cout << "Average: " << averageSalary() << endl;
        }

};

int main(){
    
    Employee employee("John", "Doe");
    employee.addSalary(1, 2000);
    employee.addSalary(2, 2000);
    employee.addSalary(3, 2000);
    employee.addSalary(4, 2000);
    employee.addSalary(5, 2000);
    employee.addSalary(6, 2000);
    employee.addSalary(7, 2000);
    employee.addSalary(8, 2000);
    employee.addSalary(9, 2000);
    employee.addSalary(10, 2000);
    employee.addSalary(11, 2000);
    employee.addSalary(12, 2000);

    employee.showEmployee();
    employee.raiseSalary(10);
    employee.showEmployee();
    
    return 0;
}