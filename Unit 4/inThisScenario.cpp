#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    Vehicle(const string& brand) : brand(brand) {}

    virtual void displayInfo() const = 0;

protected:
    string brand;
};

class Car : public Vehicle {
public:
    Car(const string& brand, int numDoors) : Vehicle(brand), numDoors(numDoors) {}

    void displayInfo() const override {
        cout << "Brand: " << brand << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }

private:
    int numDoors;
};

class Bicycle : public Vehicle {
public:
    Bicycle(const string& brand, int numGears) : Vehicle(brand), numGears(numGears) {}

    void displayInfo() const override {
        cout << "Brand: " << brand << endl;
        cout << "Number of Gears: " << numGears << endl;
    }

private:
    int numGears;
};

int main() {
    string carBrand, bicycleBrand;
    int numDoors, numGears;

    getline(cin, carBrand);
    cin >> numDoors;
    cin.ignore(); // Ignore the newline character
    getline(cin, bicycleBrand);
    cin >> numGears;

    Car car(carBrand, numDoors);
    Bicycle bicycle(bicycleBrand, numGears);

    car.displayInfo();
    bicycle.displayInfo();

    return 0;
}