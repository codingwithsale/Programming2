#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

class Band {
private:
    std::string name;
    int year;

public:
    Band(const std::string& bandName, int bandYear) : name(bandName), year(bandYear) {}

    std::string getName() const {
        return name;
    }

    void setName(const std::string& bandName) {
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
    Singer(const std::string& bandName, int bandYear, const std::string& singer) 
        : Band(bandName, bandYear), singerName(singer) {}

    std::string getSingerName() const {
        return singerName;
    }

    void setSingerName(const std::string& singer) {
        singerName = singer;
    }
};

int main() {
    Singer singer("The Beatles", 1960, "John Lennon");
    std::cout << "Band Name: " << singer.getName() << std::endl;
    std::cout << "Year of Creation: " << singer.getYear() << std::endl;
    std::cout << "Singer Name: " << singer.getSingerName() << std::endl;

    singer.setName("Led Zeppelin");
    singer.setYear(1968);
    singer.setSingerName("Robert Plant");

    std::cout << "Updated Band Name: " << singer.getName() << std::endl;
    std::cout << "Updated Year of Creation: " << singer.getYear() << std::endl;
    std::cout << "Updated Singer Name: " << singer.getSingerName() << std::endl;

    return 0;
}