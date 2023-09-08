#include <iostream>
#include <string>
using namespace std;

string filterTextWithReplacement(const string& text, const string& bannedWords) {
    string filteredText = text;

    size_t pos = 0;
    while ((pos = filteredText.find(bannedWords, pos)) != string::npos) {
        filteredText.replace(pos, bannedWords.length(), "-removed-");
        pos += 10; 
    }

    return filteredText;
}

int main() {
    string text, bannedWords;
    getline(cin, text);
    getline(cin, bannedWords);
    string filteredText = filterTextWithReplacement(text, bannedWords);
    cout << filteredText << endl;

    return 0;
}
