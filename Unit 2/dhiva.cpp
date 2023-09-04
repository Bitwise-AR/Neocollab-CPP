#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int attnd;
};
int main() {
    int max;
    cin >> max;
    cin.ignore();  
    Employee e[max];
    for (int i = 0; i < max; ++i) {
        cin >> e[i].name;
        cin.ignore(); 
    }
    for (int i = 0; i < max; ++i) {
        cin >> e[i].attnd;
        cin.ignore(); 
    }
    cout << "Attendance Report:" << endl;
    for (int i = 0; i < max; ++i) {
        cout << e[i].name << ": " << (e[i].attnd ? "Present" : "Absent") << endl;
    }

    return 0;
}
