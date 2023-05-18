#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Triangle{
    public:
        double side_a;
        double side_b;
        double side_c;
        double height;

    Triangle(double input_a, double input_b, double input_c, double input_h){
        side_a = input_a;
        side_b = input_b;
        side_c = input_c;
        height = input_h;
    };

    double perimeter(){
        return side_a + side_b + side_c;
    };

    double area(){
        return side_b * height / 2;
    };
};

int main(){
    // 4: Write a program to print the area and perimeter of a triangle 
    // having sides of 3, 4 and 5 units by creating a class named 'Triangle' 
    // with a function to print the area and perimeter.

    Triangle triangle1(3, 4, 5, 3.12);
    
    cout << triangle1.perimeter() << endl;
    cout << triangle1.area() << endl;

    return 0;
}