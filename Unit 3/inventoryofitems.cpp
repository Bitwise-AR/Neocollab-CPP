#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Item {
public:
    string name;
    int quantity;
    double cost;
};

class manager {
public:
    manager(int num) {
        size = num;
        inventory = new Item[num];
    }

    ~manager() {
        delete[] inventory;
    }

    void input() {
        for (int i = 0; i < size; ++i) {
            cin.ignore(); 
            getline(cin, inventory[i].name);
            cin >> inventory[i].quantity;
            cin >> inventory[i].cost;
        }
    }

    void fetch(int recordNum) {
        if (recordNum >= 1 && recordNum <= size) {
            Item fetchedItem = inventory[recordNum - 1];
            cout << "Item: " << fetchedItem.name << endl;
            cout << "Quantity on hand: " << fetchedItem.quantity << endl;
            cout << "Cost: " << fetchedItem.cost << endl;
        } else {
            cout << "Invalid record number." << endl;
        }
    }

private:
    int size;
    Item* inventory;
};

int main() {
    int num;
    cin >> num;
    manager manager(num);

    manager.input();

    int recordNum;
    cin >> recordNum;
    manager.fetch(recordNum+1);

    return 0;
}
