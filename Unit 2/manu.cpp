#include <iostream>
#include <iomanip>
using namespace std;

class Money {
private:
    int rupee;
    int paisa;

public:
    Money() {
        rupee = 0;
        paisa = 0;
    }

    void setRupee(int r) {
        if (r >= 0 && r <= 100000) {
            rupee = r;
        } else {
            cout << "Invalid rupee value" << endl;
        }
    }

    void setPaisa(int p) {
        if (p >= 0 && p <= 99) {
            paisa = p;
        } else {
            cout << "Invalid paisa value" << endl;
        }
    }

    int getRupee() {
        return rupee;
    }

    int getPaisa() {
        return paisa;
    }
};

int main() {
    Money m1, m2;

    int r1, p1, r2, p2;
    cin >> r1 >> p1;
    cin >> r2 >> p2;

    m1.setRupee(r1);
    m1.setPaisa(p1);

    m2.setRupee(r2);
    m2.setPaisa(p2);

    int totalRupees = m1.getRupee() + m2.getRupee();
    int totalPaisa = m1.getPaisa() + m2.getPaisa();
    if (totalPaisa > 100) {
        totalRupees += totalPaisa / 100;
        totalPaisa %= 100;
    }
    cout << totalRupees << "." << setw(2) << setfill('0') << totalPaisa << endl;

    return 0;
}
