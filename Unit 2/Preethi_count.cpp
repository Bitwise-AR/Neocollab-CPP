#include <iostream>
#include <cstring>
using namespace std;
int countWords(char **words)
{
    int count = 0;
    while (*words != nullptr)
    {
        count++;
        words++;
    }
    return count;
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    char *token = strtok(input, " ");
    char *words[1000];
    int i = 0;
    while (token != nullptr)
    {
        words[i++] = token;
        token = strtok(nullptr, " ");
    }
    words[i] = nullptr;
    int wordCount = countWords(words);
    cout << "Number of words: " << wordCount << endl;
    return 0;
}