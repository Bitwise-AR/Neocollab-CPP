#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    int count;
    cin >> count;
    if (count < 1 || count > 100) {
        cout << "Invalid entry" << endl;
        return 1;
    }

    vector<int> numbers(count);

    for (int i = 0; i < count; ++i) {
        cin >> numbers[i];
    }

    ofstream outFile("numbers.dat", ios::binary);

    if (!outFile.is_open()) {
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(numbers.data()), count * sizeof(int));

    outFile.close();

    ifstream inFile("numbers.dat", ios::binary);

    if (!inFile.is_open()) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    vector<int> read(count);
    inFile.read(reinterpret_cast<char*>(read.data()), count * sizeof(int));

    inFile.close();

    for (int i = 0; i < count; ++i) {
        cout << read[i];
        if (i < count - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
