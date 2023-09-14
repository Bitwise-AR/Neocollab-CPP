#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer() : value(0) {}

    Integer(int n) : value(n) {}

    int getValue() {
        return value;
    }
};

int main() {
    int n;
    cin >> n;

    Integer int1;

    for (int i = 0; i < n; i++) {
        cout << int1.getValue() << endl;
        if (int1.getValue() == 0) {
            int1 = Integer(10);
        } else {
            int1 = Integer(0);
        }
    }

    return 0;
}
