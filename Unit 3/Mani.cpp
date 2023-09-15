#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;  // Description size
const int NUM_RECORDS = 5; // Number of records

class Employee
{
public:
    char name[DESC_SIZE];
    int ID;
    Employee() {}
};

int create()
{
    fstream employee("Employees.dat", ios::out | ios::binary);
    Employee record;
    int employeeCount;
    cin >> employeeCount;
    for (int count = 0; count < employeeCount; count++)
    {
        cin >> record.name;
        cin >> record.ID;
        cout << "Now writing record " << count << endl;
        employee.write(reinterpret_cast<char *>(&record), sizeof(record));
    }

    employee.close();
    return 0;
}

int print()
{
    Employee record;

    fstream employee("Employees.dat", ios::in | ios::binary);

    employee.read(reinterpret_cast<char *>(&record), sizeof(record));
    while (!employee.eof())
    {
        cout << "Name: ";
        cout << record.name << endl;
        cout << "ID: ";
        cout << record.ID << endl;

        employee.read(reinterpret_cast<char *>(&record), sizeof(record));
    }

    employee.close();
    return 0;
}

int main()
{
    create();
    print();
    return 0;
}