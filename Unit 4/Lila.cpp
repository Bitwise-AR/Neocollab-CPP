#include <iostream>
#include <string>
using namespace std;

class SilverStall {
protected:
    string name;
    string detail;
    string owner;
    int cost;

public:
    SilverStall(const string& n, const string& d, const string& o, int c)
        : name(n), detail(d), owner(o), cost(c) {}

    int calculateCost() const {
        return cost;
    }
};

class GoldStall : public SilverStall {

public:
    int tvSet;
    
    GoldStall(const string& n, const string& d, const string& o, int c, int t)
        : SilverStall(n, d, o, c), tvSet(t) {}

    int calculateCost() const {
        return cost + (tvSet * 100);
    }
};

class PlatinumStall : public GoldStall {
private:
    int projector;

public:
    PlatinumStall(const string& n, const string& d, const string& o, int c, int t, int p)
        : GoldStall(n, d, o, c, t), projector(p) {}

    int calculateCost() const {
        return cost + (tvSet * 100) + (projector * 500);
    }
};

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        string name, detail, owner;
        int cost;
        cin >> name >> detail >> owner >> cost;

        SilverStall silver(name, detail, owner, cost);
        cout << silver.calculateCost() << endl;
    } else if (n == 2) {
        string name, detail, owner;
        int cost, tvSet;
        cin >> name >> detail >> owner >> cost >> tvSet;

        GoldStall gold(name, detail, owner, cost, tvSet);
        cout << gold.calculateCost() << endl;
    } else if (n == 3) {
        string name, detail, owner;
        int cost, tvSet, projector;
        cin >> name >> detail >> owner >> cost >> tvSet >> projector;

        PlatinumStall platinum(name, detail, owner, cost, tvSet, projector);
        cout << platinum.calculateCost() << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}