#include <iostream>
using namespace std;

class Parent {
public:
    void add(int a, int b) {
        cout << a + b << endl;
    }
};

class Child : public Parent {
public:
    void sub(int a, int b) {
        cout << a - b << endl;
    }
};

int main() {
    int int1, int2;
    cin >> int1 >> int2;

    Child child;
    child.add(int1, int2);
    child.sub(int1, int2);

    return 0;
}