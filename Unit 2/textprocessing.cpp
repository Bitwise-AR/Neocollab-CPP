#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    string newstr = "";
    for (char c : str) {
        if (newstr.find(c) == string::npos) {
            newstr += c;
        }
    }
    cout << newstr << endl;

    return 0;
}
