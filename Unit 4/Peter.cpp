#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int secs) {
        hours = secs / 3600;
        secs %= 3600;
        minutes = secs / 60;
        seconds = secs % 60;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int seconds;
    cin >> seconds;

    if (seconds < 0 || seconds > 86400) {
        cout << "Invalid input. Seconds should be between 0 and 86400." << endl;
        return 1;
    }

    Time timeObj(seconds);
    timeObj.display();

    return 0;
}