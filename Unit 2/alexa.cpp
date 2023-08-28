#include <iostream>
using namespace std;
class Rectangle {
public:
    Rectangle(double width, double height) : width(width), height(height) {}
    double calculateArea() const {
        return this->width * this->height;
    }

    bool same(const Rectangle& other) const {
        return this->width == other.width && this->height == other.height;
    }

private:
    double width;
    double height;
};

int main() {
    double w1, h1, w2, h2;
    cin >> w1 >> h1;
    cin >> w2 >> h2;

    Rectangle rect1(w1, h1);
    Rectangle rect2(w2, h2);

    double area1 = rect1.calculateArea();
    double area2 = rect2.calculateArea();

    cout << "Area of rect1: " << area1 << endl;
    cout << "Area of rect2: " << area2 << endl;

    if (rect1.same(rect2)) {
        cout << "rect1 and rect2 have the same dimensions." << endl;
    } 
    else {
        cout << "rect1 and rect2 have different dimensions." << endl;
    }

    return 0;
}
