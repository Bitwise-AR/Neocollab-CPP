#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        while (!isalnum(str[left]) && left < right) {
            left++;
        }
        while (!isalnum(str[right]) && left < right) {
            right--;
        }
        char leftChar = tolower(str[left]);
        char rightChar = tolower(str[right]);
        if (leftChar != rightChar) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    getline(cin, input);
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
