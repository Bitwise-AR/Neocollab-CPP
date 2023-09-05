#include <iostream>
#include <vector>
using namespace std;
class Student {
public:
    int roll;
    int m1;
    int m2;
    int m3;

    Student(int _rollno, int _mark1, int _mark2, int _mark3)
        : roll(_rollno), m1(_mark1), m2(_mark2), m3(_mark3) {}

    int total() const {
        return m1 + m2 + m3;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Student> stud;
    for (int i = 0; i < n; ++i) {
        int roll, m1, m2, m3;
        cin >> roll >> m1 >> m2 >> m3;
        stud.emplace_back(roll, m1, m2, m3);
    }

    for (const Student& student : stud) {
        cout << student.total() << endl;
    }
    
    int maxMark1 = -1, maxMark2 = -1, maxMark3 = -1;
    int rollnoMaxMark1, rollnoMaxMark2, rollnoMaxMark3;

    for (const Student& student : stud) {
        if (student.m1 > maxMark1) {
            maxMark1 = student.m1;
            rollnoMaxMark1 = student.roll;
        }
        if (student.m2 > maxMark2) {
            maxMark2 = student.m2;
            rollnoMaxMark2 = student.roll;
        }
        if (student.m3 > maxMark3) {
            maxMark3 = student.m3;
            rollnoMaxMark3 = student.roll;
        }
    }

    cout << rollnoMaxMark1 << " " << maxMark1 << endl;
    cout << rollnoMaxMark2 << " " << maxMark2 << endl;
    cout << rollnoMaxMark3 << " " << maxMark3 << endl;
    int highestTotalMarks = -1;
    int rollnoHighestTotalMarks;

    for (const Student& student : stud) {
        int totalMarks = student.total();
        if (totalMarks > highestTotalMarks) {
            highestTotalMarks = totalMarks;
            rollnoHighestTotalMarks = student.roll;
        }
    }

    cout << rollnoHighestTotalMarks << " " << highestTotalMarks << endl;

    return 0;
}
