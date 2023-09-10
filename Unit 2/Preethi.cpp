#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class MusicLibrary {
private:
    struct Song {
        string name;
        string artist;

        bool operator<(const Song& other) const {
            return artist < other.artist;
        }
    };
    vector<Song> songs;

public:
    void addSong(const string& name, const string& artist) {
        Song song;
        song.name = name;
        song.artist = artist;
        songs.push_back(song);
    }

    void displaySortedSongs() {
        sort(songs.begin(), songs.end());
        for (const auto& song : songs) {
            cout << song.name << " - " << song.artist << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    MusicLibrary ml;

    for (int i = 0; i < n; ++i) {
        string name, artist;
        getline(cin, name);
        getline(cin, artist);
        ml.addSong(name, artist);
    }
    ml.displaySortedSongs();

    return 0;
}