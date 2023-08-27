#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
void findFrequency(int* arr, int size) {
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    map<int, int> sortedMap(freq.begin(), freq.end());
    for (const auto& entry : sortedMap) {
        cout << entry.first << " - " << entry.second << " ";
        if (entry.second == 1) {
            cout << "time";
        } else {
            cout << "times";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    findFrequency(arr, size);
    delete[] arr;
    return 0;
}
