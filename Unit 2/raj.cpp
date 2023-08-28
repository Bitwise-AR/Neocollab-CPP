#include <iostream>
using namespace std;

int checkPointer(int* ptr, int defaultValue) {
    if (ptr == nullptr) {
        return defaultValue;
    } else {
        return *ptr;
    }
}

int main() {
    int n;
    cin >> n;
    int* ptr = nullptr; 
    cout << "Result: " << ptr << endl; 
    int res = checkPointer(ptr, n);
    cout << "Result: " << res << endl;

    return 0;
}
