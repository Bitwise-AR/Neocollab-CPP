#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    int n;
    cin >> n;

    vector<Rectangle> r;
    
    for (int i = 0; i < n; i++) {
        double l, w;
        cin >> l >> w;
        r.emplace_back(l, w);
    }

    double sperimeter = r[0].perimeter();

    for (int i = 0; i < n; i++) {
        double p = r[i].perimeter();
        cout << "Perimeter of rectangle " << i + 1 << ": " << p << endl;
        sperimeter = min(sperimeter, p);
    }

    cout << "Perimeter of the smallest rectangle: " << sperimeter << endl;

    return 0;
}