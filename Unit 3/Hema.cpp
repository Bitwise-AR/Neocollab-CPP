#include <iostream>
#include <string>

using namespace std;

class Professor {
private:
    int id;
    string name;
    int salary;

public:
    Professor(int id = 0, string name = "", int salary = 0) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }

    bool check() {
        return salary >= 20000;
    }
};

int main() {
    int N;
    cin >> N;

    Professor p[N];

    for (int i = 0; i < N; i++) {
        int id, salary;
        string name;
        cin >> id >> name >> salary;
        p[i] = Professor(id, name, salary);
    }

    for (int i = 0; i < N; i++) {
        if (p[i].check()) {
            p[i].display();
        }
    }

    return 0;
}