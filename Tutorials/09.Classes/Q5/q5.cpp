#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Room{
    private:
        double length, width, height;
    
    public: 
        Room(double l, double w, double h){
            length = l;
            width = w;
            height = h;
        };

    double area(double length, double width){
        return length * width;
    };

    double volume(double length, double width, double height){
        return length * width * height;
    };

    double getLength(){
        return length;
    };
    double getWidth(){
        return width;
    };
    double getHeight(){
        return height;
    };

    void setLength(double new_len){
        length = new_len;
    };
    void setWidth(double new_wid){
        width = new_wid;
    };
    void setHeight(double new_h){
        height = new_h;
    };
};

int main(){
    // 5: Create class Room and methods to calculate the area and volume of the room.

    Room room1(5.4, 3.2, 2.0);

    cout << room1.area(room1.getLength(), room1.getWidth()) << endl;
    cout << room1.volume(room1.getLength(), room1.getWidth(), room1.getHeight()) << endl;
    
    return 0;
}