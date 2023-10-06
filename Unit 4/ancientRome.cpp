#include <iostream>
#include <string>
using namespace std;

class RomanNumeral
{
private:
    string roman;

public:
    RomanNumeral(const string &r) : roman(r) {}

    int toDecimal() const
    {
        int decimal = 0;
        int prevValue = 0;

        for (int i = roman.length() - 1; i >= 0; i--)
        {
            int value = 0;

            switch (roman[i])
            {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
            default:
                cerr << "Invalid Roman numeral character: " << roman[i] << endl;
                return -1; 
            }

            if (value < prevValue)
            {
                decimal -= value;
            }
            else
            {
                decimal += value;
            }

            prevValue = value;
        }

        return decimal;
    }
};

int main()
{
    string romanNumeral;
    cin >> romanNumeral;

    RomanNumeral roman(romanNumeral);
    int decimal = roman.toDecimal();

    if (decimal != -1)
    {
        cout << "Equivalent decimal number: " << decimal << endl;
    }
    else
    {
        cout << "Invalid Roman numeral input." << endl;
    }

    return 0;
}