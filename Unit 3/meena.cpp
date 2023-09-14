#include <iostream>
using namespace std;

class Box {
public:
    double width, height, depth;

    Box() {
        width = 0;
        height = 0;
        depth = 0;
    }
    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    Box(double len) {
        width = len;
        height = len;
        depth = len;
    }

    double volume() {
        return width * height * depth;
    }
};

int main() {
    double w, h, d, len;
    cin >> w >> h >> d;
    cin >> len;

    Box mybox1(0);
    Box mybox2(w, h, d);
    Box mycube(len);

    double volume1 = mybox1.volume();
    double volume2 = mybox2.volume();
    double volume3 = mycube.volume();
    
    cout << "Volume of mybox1 is " << volume1 << endl;
    cout << "Volume of mybox2 is " << volume2 << endl;
    cout << "Volume of mycube is " << volume3 << endl;

    return 0;
}