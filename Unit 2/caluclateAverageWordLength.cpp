#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

double calculateAverageWordLength(const string& sentence) {
    double totalLength = 0.0;
    int numWords = 0;

    for (size_t i = 0; i < sentence.length(); ++i) {
        while (i < sentence.length() && isspace(sentence[i])) {
            ++i;
        }

        if (i < sentence.length() && !isspace(sentence[i])) {
            ++numWords;
            while (i < sentence.length() && !isspace(sentence[i])) {
                ++totalLength;
                ++i;
            }
        }
    }

    if (numWords == 0) {
        return 0.000; 
    } else {
        double avglength = totalLength / numWords;
        return avglength;
    }
}

int main() {
    string sentence;
    getline(cin, sentence);
    double avglength = calculateAverageWordLength(sentence);
    cout << fixed << setprecision(3) << avglength << endl;

    return 0;
}
