#include <iostream>
#include <ctime>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    Time() {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        hours = ltm->tm_hour;
        minutes = ltm->tm_min;
        seconds = ltm->tm_sec;
    }

    
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void printTime() {
        std::cout << "Current time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

int main() {
    Time currentTime; 
    currentTime.printTime();

    Time customTime(10, 30, 45); 
    customTime.printTime();

    return 0;
}