#include <iostream>
#include <map>
#include <string>
using namespace std;
class VotingSystem {
private:
    map<string, int> candidateVotes;

public:
    void vote(const string& candidate, int numVotes) {
        candidateVotes[candidate] += numVotes;
    }

    string getWinner() {
        string winner;
        int maxVotes = 0;

        for (const auto& pair : candidateVotes) {
            if (pair.second > maxVotes) {
                maxVotes = pair.second;
                winner = pair.first;
            }
        }

        return winner;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    VotingSystem votingSystem;

    for (int i = 0; i < n; ++i) {
        string name;
        getline(cin, name);
        int numVotes;
        cin >> numVotes;
        cin.ignore(); 

        votingSystem.vote(name, numVotes);
    }

    string winner = votingSystem.getWinner();
    cout << winner << endl;

    return 0;
}
