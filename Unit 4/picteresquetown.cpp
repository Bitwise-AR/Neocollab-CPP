#include <iostream>
#include <cstring>
using namespace std;

class CustomString {
private:
    char str[101]; 

public:
    CustomString(const char* input) {
        strncpy(str, input, sizeof(str) - 1);
        str[sizeof(str) - 1] = '\0'; 
    }

    void invertCase() {
        for (int i = 0; str[i]; ++i) {
            if (isalpha(str[i])) {
                if (islower(str[i])) {
                    str[i] = toupper(str[i]);
                } else {
                    str[i] = tolower(str[i]);
                }
            }
        }
    }

    void displayOriginal() {
        cout << "Original String: " << str << endl;
    }

    void displayInverted() {
        cout << "Inverted String: " << str << endl;
    }
};

int main() {
    char input[101];
    cin.getline(input, sizeof(input));

    CustomString customStr(input);

    customStr.displayOriginal();
    customStr.invertCase();
    customStr.displayInverted();

    return 0;
}