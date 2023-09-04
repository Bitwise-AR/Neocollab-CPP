#include <iostream>
using namespace std;
class Time {
public:
    int hours;
    int minutes;
};
int main() {
    Time t;
    cin >> t.hours >> t.minutes;
    int* hptr = &t.hours;
    int* mptr = &t.minutes;
    long seconds = (*hptr * 3600) + (*mptr * 60);
    cout << seconds << endl;

    return 0;
}
