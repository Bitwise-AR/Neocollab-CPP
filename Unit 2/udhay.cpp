#include <iostream>
#include <string>
using namespace std;
class ContactList {
private:
    string contactNames[20];
    string contactNumbers[20];
    int count;

public:
    ContactList() {
        count = 0;
    }

    void addContact(const string& name, const string& number) {
        if (count < 20) {
            contactNames[count] = name;
            contactNumbers[count] = number;
            count++;
        } else {
            cout << "Contact list is full." << endl;
        }
    }

    string searchContact(const string& name) {
        for (int i = 0; i < count; i++) {
            if (contactNames[i] == name) {
                return contactNumbers[i];
            }
        }
        return "Contact not found.";
    }
};

int main() {
    int n;
    cin >> n;

    ContactList contacts;

    for (int i = 0; i < n; i++) {
        string name, number;
        cin >> name >> number;
        contacts.addContact(name, number);
    }

    string searchName;
    cin >> searchName;

    string result = contacts.searchContact(searchName);
    cout << result << endl;

    return 0;
}
