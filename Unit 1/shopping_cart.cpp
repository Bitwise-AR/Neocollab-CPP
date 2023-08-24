#include <iostream>
#include <iomanip> 
using namespace std;
double total(double price) {
    return price;
}
double total(double price, int quantity) {
    return price * quantity;
}

double total(double price, int quantity, double discount) {
    double prev = price * quantity;
    double next = prev * (discount / 100);
    return prev - next;
}

int main() {
    while (true) {
        int choice;
        cin >> choice;

        if (choice == 4) {
            break;
        } else if (choice >= 1 && choice <= 3) {
            double price;
            int quantity;
            double discount;
            cin >> price;

            if (choice == 2 || choice == 3) {
                cin >> quantity;
            }

            if (choice == 3) {
                cin >> discount;
            }

            double totalPrice = 0.0;

            if (choice == 1) {
                totalPrice = total(price);
            } else if (choice == 2) {
                totalPrice = total(price, quantity);
            } else if (choice == 3) {
                totalPrice = total(price, quantity, discount);
            }

            cout << "Total price: " << fixed << setprecision(2) << totalPrice << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
