#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    ofstream myfile("gfg.data");
    if (myfile.is_open()) {
        myfile << name;
        myfile.close();
    } else {
        cout << "Unable to open the file.";
        return 0;
    }

    ifstream file("gfg.data");
    if (file.is_open()) {
        string stored_name;
        getline(file, stored_name);
        file.close();
        cout << stored_name << endl;
    } else {
        cout << "Unable to open the file.";
    }

    return 0;
}