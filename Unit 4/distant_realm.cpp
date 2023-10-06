#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    Time operator-(const Time& other) const {
        int h = hours - other.hours;
        int m = minutes - other.minutes;
        int s = seconds - other.seconds;

        if (s < 0) {
            m--;
            s += 60;
        }
        if (m < 0) {
            h--;
            m += 60;
        }
        

        return Time(h, m, s);
    }

    void display() const {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    cout << "Time 1: ";
    time1.display();
    cout << "Time 2: ";
    time2.display();

    Time diff = time1 - time2;
    cout << "Time difference: ";
    diff.display();

    return 0;
}
