#include <iostream>
#include <string>

using namespace std;

class GradeBook {
private:
    string courseName;
    string instructorName;

public:
    GradeBook() {}

    void setData(string course, string instructor) {
        courseName = course;
        instructorName = instructor;
    }

    string getcourse() {
        return courseName;
    }

    string getinstructor() {
        return instructorName;
    }

    void display() {
        cout << "Welcome to the grade book for " << getcourse() << "!" << endl;
        cout << "This course is presented by: " << getinstructor() << endl;
    }
};

int main() {
    string course, instructor;
    getline(cin, course);
    getline(cin, instructor);

    GradeBook gb;
    gb.setData(course, instructor);

    gb.display();

    return 0;
}