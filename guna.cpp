#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks[5];
    int total;

    void totalmarks() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
    }
};

int main() {
    int n;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        cin >> s[i].name;
        cin >> s[i].roll;
        for (int j = 0; j < 5; j++) {
            cin >> s[i].marks[j];
        }
        s[i].totalmarks();
    }

    cout << "Student Report Cards:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll Number: " << s[i].roll << endl;
        cout << "Total Marks: " << s[i].total << endl;
    }

    return 0;
}