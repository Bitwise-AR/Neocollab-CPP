#include <iostream>
#include <string>
using namespace std;

class Marks {
protected:
    static int rollNumberCounter;
    int rollNumber;
    string name;
    int physicsMarks;
    int chemistryMarks;
    int mathematicsMarks;

public:
    Marks(const string& n, int p, int c, int m)
        : rollNumber(++rollNumberCounter), name(n), physicsMarks(p), chemistryMarks(c), mathematicsMarks(m) {}

    int calculateTotalMarks() const {
        return physicsMarks + chemistryMarks + mathematicsMarks;
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total marks: " << calculateTotalMarks() << endl << endl;
    }
};

int Marks::rollNumberCounter = 0;

class Physics : public Marks {
public:
    Physics(const string& n, int p, int c, int m)
        : Marks(n, p, c, m) {}
};

class Chemistry : public Marks {
public:
    Chemistry(const string& n, int p, int c, int m)
        : Marks(n, p, c, m) {}
};

class Mathematics : public Marks {
public:
    Mathematics(const string& n, int p, int c, int m)
        : Marks(n, p, c, m) {}
};

int main() {
    int n;
    cin >> n;

    int totalMarks = 0;

    for (int i = 0; i < n; i++) {
        string name;
        int physics, chemistry, mathematics;
        cin >> name >> physics >> chemistry >> mathematics;

        Physics physicsObj(name, physics, chemistry, mathematics);
        physicsObj.display();

        totalMarks += physicsObj.calculateTotalMarks();
    }

    cout << "Total marks of the class is: " << totalMarks << endl;
    cout << "The average marks of the class is: " << static_cast<double>(totalMarks) / n << endl;

    return 0;
}