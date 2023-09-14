#include <iostream>
#include <cmath>
using namespace std;

class Demo {
private:
    int n;

public:
    Demo(int n) {
        n = n;
        cout << "Inside Constructor" << endl;
    }
    
    ~Demo() {
        cout << "Inside Destructor" << endl;
    }
    
    void display() {
        int sq = n * n;
        double sqroot = sqrt(n);
        
        cout << "sq = " << sq << endl;
        cout << "sq root = " << sqroot << endl;
    }
};

int main() {
    int n;
    cin >> n;
    
    Demo obj(n);
    obj.display();
    
    return 0;
}