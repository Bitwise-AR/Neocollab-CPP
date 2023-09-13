#include <iostream>

using namespace std;

class Height {
private:
    int feet;
    double inches;

public:
    Height() {
        feet = 0;
        inches = 0.0;
    }

    void setHeight(int ft, double in) {
        feet = ft;
        inches = in;
    }

    void setHeight(int ft, int in) {
        feet = ft;
        inches = static_cast<double>(in);
    }

    void setHeight(double in) {
        feet = static_cast<int>(in);
        inches = in - static_cast<int>(in);
        inches *= 12;
    }

    void show() const {
        cout << "Feet=" << feet << " inches=" << inches << endl;
    }
};

int main() {
    Height h1, h2, h3;
    int feet1, inch1, feet3;
    double fraction, inch2;

    cin >> feet1;
    cin >> fraction;
    cin >> feet3 >> inch2;

    h1.setHeight(feet1, 0);
    h2.setHeight(fraction);
    h3.setHeight(feet3, inch2);

    h1.show();
    h2.show();
    h3.show();

    return 0;
}
