#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    int rollNo;
    string name;
    double marks;
};

int main() {
    int n;
    cin >> n;

    ofstream outFile("sample.txt");

    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        Student s;
        cin >> s.rollNo;
        cin.ignore(); 
        getline(cin, s.name);
        cin >> s.marks;

        outFile << s.rollNo << endl;
        outFile << s.name << endl;
        outFile << s.marks << endl;
    }

    outFile.close();

    ifstream inFile("sample.txt");

    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "Reading Student information from the file:" << endl;
    Student s;
    while (inFile >> s.rollNo >> ws && getline(inFile, s.name) >> s.marks) {
        cout << "Roll No.: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }

    inFile.close();

    return 0;
}
