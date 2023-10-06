#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }
    
    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

private:
    int getGCD(int a, int b) const {
        if (b == 0) {
            return a;
        }
        return getGCD(b, a % b);
    }
};

int main() {
    int num1, denom1, num2, denom2;
    
    cout << " ";
    cin >> num1 >> denom1;
    
    cout << " ";
    cin >> num2 >> denom2;
    
    Fraction fraction1(num1, denom1);
    Fraction fraction2(num2, denom2);
    
    Fraction result = fraction1 * fraction2;
    
    cout << "The result of multiplication is: " << result.getNumerator() << "/" << result.getDenominator() << endl;

    return 0;
}