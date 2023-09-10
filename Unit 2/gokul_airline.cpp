#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Airline {
private:
    string airlineName;
    vector<string> destinations;
    vector<int> flightsPerDay;

public:
    Airline(const string& name) : airlineName(name) {}

    void addDestination(const string& destination, int flights) {
        destinations.push_back(destination);
        flightsPerDay.push_back(flights);
    }

    int checkFlights(const string& destinationToCheck) {
        for (size_t i = 0; i < destinations.size(); ++i) {
            if (destinations[i] == destinationToCheck) {
                return flightsPerDay[i];
            }
        }
        return 0; 
    }
};

int main() {
    string airlineName;
    int numDestinations;
    getline(cin, airlineName);
    cin >> numDestinations;
    cin.ignore(); 

    Airline airline(airlineName);

    for (int i = 0; i < numDestinations; ++i) {
        string destination;
        int flights;
        getline(cin, destination);
        cin >> flights;
        cin.ignore(); 

        airline.addDestination(destination, flights);
    }
    string destinationToCheck;
    getline(cin, destinationToCheck);

    int availableFlights = airline.checkFlights(destinationToCheck);
    cout << availableFlights << endl;

    return 0;
}
