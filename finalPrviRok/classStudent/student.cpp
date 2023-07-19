#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

// Zadatak sa prvog popravnog roka.

class Student {
    public:
        string name;
        string surname;
        int age;
        int grades[5];

        Student(string n, string s, int a){
            name = n;
            surname = s;
            age = a;
            for (int i = 0; i < 5; i++){
                grades[i] = 0;
            }
        }
        void addGrade(int grade){
            for (int i = 0; i < 5; i++){
                if (grades[i] == 0){
                    grades[i] = grade;
                    break;
                }
            }
        }
        double getAverageGrade(){
            double sum = 0;
            for (int i = 0; i < 5; i++){
                sum += grades[i];
            }
            double average = sum / 5;
            return average;
        }
};

int main(){
    Student student1("John", "Smith", 20);
    student1.addGrade(5);
    student1.addGrade(4);
    student1.addGrade(3);
    student1.addGrade(5);
    student1.addGrade(5);

    Student student2("Mujo", "Mujic", 21);
    student2.addGrade(5);
    student2.addGrade(5);
    student2.addGrade(5);
    student2.addGrade(5);
    student2.addGrade(5);

    std::cout << student1.getAverageGrade() << endl;
    std::cout << student2.getAverageGrade() << endl;
    
    return 0;
}