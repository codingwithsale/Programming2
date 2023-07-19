#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Rectangle{
    public:
        double length;
        double width;

        Rectangle (double l, double w){
            length = l;
            width = w;
        }

        void setLength(double new_len){
            length = new_len;
        }
        void setWidth(double new_wid){
            width = new_wid;
        }
        double calculateArea(){
            return length*width;
        }
        double calculatePerimeter(){
            return (2*length + 2*width);
        }
};

int main(){
    
    Rectangle rec1(9.0, 5.0);

    std::cout << "Area: " << rec1.calculateArea() << endl;
    std::cout << "Perimeter: " << rec1.calculatePerimeter() << endl;
    
    return 0;
}