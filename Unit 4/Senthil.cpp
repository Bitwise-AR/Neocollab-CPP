#include <iostream>
#include <iomanip>
using namespace std;

class StockItem {
private:
    int itemCode;
    int quantity;
    double pricePerUnit;

public:
    StockItem(int code, int qty, double price) {
        itemCode = code;
        quantity = qty;
        pricePerUnit = price;
    }

    double getTotalPrice() const {
        return quantity * pricePerUnit;
    }

    void printDetails() const {
        cout << "Total Price of the Stock: " << fixed << setprecision(2) << getTotalPrice() << endl;
    }
};

int main() {
    int itemCode, quantity;
    double pricePerUnit;

    cin >> itemCode >> quantity >> pricePerUnit;

    StockItem stock(itemCode, quantity, pricePerUnit);

    stock.printDetails();

    return 0;
}
