#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class TrafficLight{
    public:
        string color;
        int duration;

        TrafficLight(int d){
            color = "Red";
            duration = d;
        };

        void setColor(string new_color){
            color = new_color;
        };

        void change(){
            if (color == "Red"){
                color = "Green";
            }
            else {
                color = "Red";
            }
        };
};

int main(){
    // 9: Write a C++ program to create class called "TrafficLight" with attributes for color and duration, 
    // and methods to change the color and check for red or green.

    TrafficLight otoka(30);

    while(otoka.duration > 0){
        cout << otoka.color << endl;
        otoka.change();
        otoka.duration--;
    }
    
    return 0;
}