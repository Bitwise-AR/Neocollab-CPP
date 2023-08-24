#include <iostream>
using namespace std;
inline int countEvenNumbers(int n) {
    int count = 0;
    int squared = n * n;

    while (squared > 0) {
        int digit = squared % 10;
        if (digit % 2 == 0) {
            count++;
        }
        squared /= 10;
    }

    return count;
}

int main() {
    int inp;
    cin >> inp;

    int result = countEvenNumbers(inp);
    cout << result << endl;

    return 0;
}
