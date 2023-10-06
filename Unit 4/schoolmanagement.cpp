#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string first_name;
    string last_name;
    int ID;

public:
    Person(const string& first_name, const string& last_name, int ID)
        : first_name(first_name), last_name(last_name), ID(ID) {}

    void printInfo() {
        cout << "Name: " << first_name << " " << last_name << endl;
        cout << "ID: " << ID << endl;
    }
};

class Student : public Person {
private:
    int num_scores;
    int* test_scores;

public:
    Student(const string& first_name, const string& last_name, int ID, int num_scores, int* test_scores)
        : Person(first_name, last_name, ID), num_scores(num_scores) {
        this->test_scores = new int[num_scores];
        for (int i = 0; i < num_scores; ++i) {
            this->test_scores[i] = test_scores[i];
        }
    }

    char calculateGrade() {
        int sum = 0;
        for (int i = 0; i < num_scores; ++i) {
            sum += test_scores[i];
        }
        int average = sum / num_scores;

        if (average >= 90 && average <= 100) return 'O';
        if (average >= 80 && average < 90) return 'E';
        if (average >= 70 && average < 80) return 'A';
        if (average >= 55 && average < 70) return 'P';
        if (average >= 40 && average < 55) return 'D';
        return 'T';
    }

    void printGrade() {
        cout << "Grade: " << calculateGrade() << endl;
    }

    ~Student() {
        delete[] test_scores;
    }
};

int main() {
    string first_name, last_name;
    int ID, num_scores;

    cin >> first_name >> last_name >> ID >> num_scores;

    int* test_scores = new int[num_scores];
    for (int i = 0; i < num_scores; ++i) {
        cin >> test_scores[i];
    }

    Student student(first_name, last_name, ID, num_scores, test_scores);

    student.printInfo();
    student.printGrade();

    delete[] test_scores;

    return 0;
}
