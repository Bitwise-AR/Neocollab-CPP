#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Info {
    string name;
    int age;
    string adrrL1;
    string adrrL2;
    string phone;
};

void writeData(const Info& person) {
    ofstream outFile("people.dat", ios::app); 

    if (!outFile) {
        cerr << "Error opening file." << endl;
        return;
    }

    outFile << person.name << endl;
    outFile << person.age << endl;
    outFile << person.adrrL1 << endl;
    outFile << person.adrrL2 << endl;
    outFile << person.phone << endl;

    outFile.close(); 
}

void readData() {
    ifstream inFile("people.dat");

    if (!inFile) {
        cerr << "Error opening file." << endl;
        return;
    }

    Info person;

    while (getline(inFile, person.name)) {
        inFile >> person.age;
        inFile.ignore(); 
        getline(inFile, person.adrrL1);
        getline(inFile, person.adrrL2);
        getline(inFile, person.phone);

        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address line 1: " << person.adrrL1 << endl;
        cout << "Address line 2: " << person.adrrL2 << endl;
        cout << "Phone: " << person.phone << endl;
    }

    inFile.close();
}

int main() {
    char addAnother;
    do {
        Info person;
        getline(cin, person.name);
        cin >> person.age;
        cin.ignore(); 
        getline(cin, person.adrrL1);
        getline(cin, person.adrrL2);
        getline(cin, person.phone);

        writeData(person);

        cin >> addAnother;
        cin.ignore(); 

    } while (addAnother == 'Y' || addAnother == 'y');
    readData();

    return 0;
}
