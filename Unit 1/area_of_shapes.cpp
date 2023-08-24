#include <iostream>
using namespace std;

class Area {
public:
    inline double squareArea(double side) {
        return side * side;
    }
    inline double rectangleArea(double length, double width) {
        return length * width;
    }

    inline double circleArea(double radius) {
        return 3.14159 * radius * radius;
    }

    inline double parallelogramArea(double base, double height) {
        return base * height;
    }
};

int main() {
    Area areaCalculator;

    double side;
    double length, width;
    double radius;
    double base, height;
    cin >> side;
    cin >> length >> width;
    cin >> radius;
    cin >> base >> height;

    double squareArea = areaCalculator.squareArea(side);
    double rectangleArea = areaCalculator.rectangleArea(length, width);
    double circleArea = areaCalculator.circleArea(radius);
    double parallelogramArea = areaCalculator.parallelogramArea(base, height);

    cout << "Area of square: " << squareArea << endl;
    cout << "Area of rectangle: " << rectangleArea << endl;
    cout << "Area of circle: " << circleArea << endl;
    cout << "Area of parallelogram: " << parallelogramArea << endl;

    return 0;
}
