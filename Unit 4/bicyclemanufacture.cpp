#include <iostream>
using namespace std;

class Bicycle {
protected:
    int gear;
    int speed;

public:
    Bicycle(int g, int s) : gear(g), speed(s) {}

    void speedUp(int increment) {
        speed += increment;
    }

    void applyBrakes(int decrement) {
        speed -= decrement;
    }

    void displayInfo() {
        cout << "No of gears are " << gear << endl;
        cout << "Speed of bicycle is " << speed << endl;
    }
};

class MountainBike : public Bicycle {
private:
    int seatHeight;

public:
    MountainBike(int g, int s, int h) : Bicycle(g, s), seatHeight(h) {}

    void displayInfo() {
        Bicycle::displayInfo();
        cout << "Seat height is " << seatHeight << endl;
    }
};

int main() {
    int gears, speed, seatHeight;
    cin >> gears >> speed >> seatHeight;

    MountainBike mountainBike(gears, speed, seatHeight);
    mountainBike.displayInfo();

    return 0;
}