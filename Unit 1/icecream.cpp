#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
class Icecream {
public:
    void Quantity(int choice, int r, int h = -1) {
        double volume = 0.0;

        if (choice == 1) {
            volume = r * r * r;
        } else if (choice == 2) {
            volume = 0.33 * M_PI * r * r * h;
        }

        cout << fixed << setprecision(2) << volume << endl;
    }
};

int main() {
    Icecream icecream;

    int choice, r, h;
    cin >> choice;

    if (choice == 1) {
        cin >> r;
        icecream.Quantity(choice, r);
    } else if (choice == 2) {
        cin >> r >> h;
        icecream.Quantity(choice, r, h);
    } else {
        cout << "Invalid choice. Please enter a valid option." << endl;
    }

    return 0;
}
