#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int birthYear;
    int currentYear;

public:
    Person(const string& n, int by, int cy) : name(n), birthYear(by), currentYear(cy) {}

    int calculateAge() const {
        return currentYear - birthYear;
    }

    void printAge() const {
        cout << "Age: " << calculateAge() << " years" << endl;
    }
};

int main() {
    string name;
    int birthYear, currentYear;

    cin >> name >> birthYear >> currentYear;

    if (birthYear > currentYear) {
        cout << "Invalid input. Birth year should be less than or equal to the current year." << endl;
        return 1;
    }

    Person person(name, birthYear, currentYear);
    person.printAge();

    return 0;
}