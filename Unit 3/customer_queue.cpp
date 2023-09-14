#include <iostream>
using namespace std;

class Man {
private:
    static int count; 
    int custno;

public:
    Man() {
        custno = ++count;
        cout << "Created " << custno << endl;
    }

    ~Man() {
        cout << "Destroyed " << custno - 1 << endl;
    }
};

int Man::count = 0;

int main() {
    int n;
    cin >> n;

    Man* customers = new Man[n]; 

    delete[] customers; 

    return 0;
}
