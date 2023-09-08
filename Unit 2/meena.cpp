#include <iostream>
using namespace std;
class Cube {
private:
    double length;
    double breadth;
    double height;

public:
    void setLength(double l) {
        length = l;
    }

    void setBreadth(double b) {
        breadth = b;
    }

    void setHeight(double h) {
        height = h;
    }

    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Cube cube;

    double l, b, h;
    cin >> l >> b >> h;
    if (l <= 99 && b <= 99 && h <= 99) {
        cube.setLength(l);
        cube.setBreadth(b);
        cube.setHeight(h);

        double volume = cube.getVolume();
        cout << volume << endl;
    } else {
        cout << "Input values must be less than or equal to 99." << endl;
    }

    return 0;
}
