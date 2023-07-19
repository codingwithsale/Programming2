#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Band {
private:
    string name;
    int year;

public:
    Band(string& bandName, int bandYear) : name(bandName), year(bandYear) {
        name = bandName;
        year = bandYear;
    }

    string getName() const {
        return name;
    }

    void setName(const string& bandName) {
        name = bandName;
    }

    int getYear() const {
        return year;
    }

    void setYear(int bandYear) {
        year = bandYear;
    }
};

class Singer : public Band {
private:
    std::string singerName;

public:
    Singer(string& bandName, int bandYear, string& singer) {
        Band(bandName, bandYear); 
        singerName = singer;
    }

    string getSingerName() const {
        return singerName;
    }

    void setSingerName(const std::string& singer) {
        singerName = singer;
    }
};
