#include <iostream>
#include <string>
using namespace std;

class Welcome {
public:
    Welcome() {
        cout << "Welcome!! ";
    }
};

class Hello : public Welcome {
private:
    string name;

public:
    Hello(const string& n) : name(n) {
        cout << "Hi, " << name << endl;
    }
};

int main() {
    string name;
    cin >> name;

    Hello hello(name);

    return 0;
}