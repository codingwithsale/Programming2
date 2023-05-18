#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Movie{
    public:
        string title;
        string director;
        string actors; 
        string reviews;

        Movie(string t, string d, string a, string r){
            title = t;
            director = d;
            actors = a;
            reviews = r;
        };

        string getReviews(){
            return reviews;
        };

        void setReviews(string new_rev){
            reviews = new_rev;
        };
};

int main(){
    // 10: Write a C++ program to create a class called "Movie" with attributes for title, director, actors and reviews,
    // and methods for adding and retrieving reviews.

    Movie movie1("Top Gun", "Tom Cruise", "Tom Cruise", "Excellent movie");

    cout << movie1.getReviews() << endl;
    movie1.setReviews("Fantastic");
    cout << movie1.getReviews() << endl;
    
    return 0;
}