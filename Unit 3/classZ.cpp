#include <iostream>

using namespace std;

class Z {
public:
    Z() {
        cout << "Constructor called" << endl;
    }

    ~Z() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Z* zArray = new Z[n];

    delete[] zArray;

    return 0;
}
