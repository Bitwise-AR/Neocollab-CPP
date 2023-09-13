#include <iostream>
#include <string>
using namespace std;

string toLeetSpeak(const string& sentence) {
    string leetSentence = sentence;
    for (char& c : leetSentence) {
        switch (c) {
            case 'a':
            case 'A':
                c = '4';
                break;
            case 'e':
            case 'E':
                c = '3';
                break;
            case 'i':
            case 'I':
                c = '1';
                break;
            case 'o':
            case 'O':
                c = '0';
                break;
            case 'u':
            case 'U':
                c = 'v';
                break;
            default:
                break;
        }
    }
    return leetSentence;
}

int main() {
    string sentence;
    getline(cin, sentence);

    string leetSentence = toLeetSpeak(sentence);
    cout << leetSentence << endl;

    return 0;
}