#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Product {
public:
    Product(const string& name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

    double getTotalPrice() const {
        return price * quantity;
    }

    void displayDetails() const {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << fixed << setprecision(2) << getTotalPrice() << endl;
    }

private:
    string name;
    double price;
    int quantity;
};

int main() {
    int max;
    cin >> max;
    Product** cart = new Product*[max];

    for (int i = 0; i < max; ++i) {
        string name;
        double price;
        int quantity;

        cin >> name >> price >> quantity;
        cart[i] = new Product(name, price, quantity);
    }
    cout << "Shopping Cart details: " << endl;
    for (int i = 0; i < max; ++i) {
        cart[i]->displayDetails();
    }
    for (int i = 0; i < max; ++i) {
        delete cart[i];
    }
    delete[] cart;

    return 0;
}
