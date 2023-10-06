#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    
    Rectangle(int w, int h) : width(w), height(h) {}
    
    bool operator==(const Rectangle& other) const {
        return (width == other.width) && (height == other.height);
    }
};

int main() {
    int w1, h1, h1, h2;
    
    cin >> w1 >> h1;
    cin >> h1 >> h2;
    
    Rectangle rect1(w1, h1);
    Rectangle rect2(h1, h2);
    
    if (rect1 == rect2) {
        cout << "Rectangle 1 and Rectangle 2 are equal in size." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 2 are not equal in size." << endl;
    }
    
    return 0;
}