#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Student{
    public:
        string name;
        int roll_no;
};

int main(){
    // 3: Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
    // Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
    
    Student student1;
    student1.name = "John";
    student1.roll_no = 2;

    cout << student1.name << " " << student1.roll_no << endl;

    return 0;
}