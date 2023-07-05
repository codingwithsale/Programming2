#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Course{
    public:
        int year;
        string professor;
        int grade;

    Course(int year_input, string professor_input, int grade_input){
        year = year_input;
        professor = professor_input;
        grade = grade_input;
    };

};

int main(){
    // 2: Create class Course and three objects of that class (Programming, Calculus, Physics). 
    // The class should have the following attributes: year, professor and grade.

    Course math(1, "Lidjan", 5);
    Course programming(1, "Dzelihodzic", 6);
    Course physics(1, "Gurbeta", 6);

    double sum = math.grade + programming.grade + physics.grade;
    double average = sum / 3;
    cout << average << endl;
    
    return 0;
}