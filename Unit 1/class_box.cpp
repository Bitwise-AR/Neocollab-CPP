#include <iostream>
using namespace std;
class Box {
private:
    double length;

public:
    Box() : length(0) {}
    void get() {
        cin >> length;
    }
    friend double printVolume(const Box& box);
};
double printVolume(const Box& box) {
    double volume = box.length * box.length * box.length;
    return volume;
}

int main() {
    Box b;
    b.get();
    double volume = printVolume(b);
    cout << volume << endl;

    return 0;
}
