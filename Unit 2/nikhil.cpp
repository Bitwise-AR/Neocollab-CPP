#include <iostream>
#include <iomanip>
using namespace std;
struct Expenses
{
    float branding;
    float travel;
    float food;
    float logistics;
};

void calculate(const Expenses &exp)
{
    float totalExpenses = exp.branding + exp.travel + exp.food + exp.logistics;
    cout << fixed << setprecision(2) << "Total expenses: Rs." << totalExpenses << endl;
    const float *ptr[] = {&exp.branding, &exp.travel, &exp.food, &exp.logistics};
    const char *expenseNames[] = {"Branding", "Travel", "Food", "Logistics"};
    const int numExpenses = sizeof(ptr) / sizeof(ptr[0]);
    for (int i = 0; i < numExpenses; i++)
    {
        float percentage = (*ptr[i] / totalExpenses) * 100;
        cout << fixed << setprecision(2) << expenseNames[i] << " expenses percentage: " << percentage << endl;
    }
}

int main()
{
    Expenses exp;
    cin >> exp.branding;
    cin >> exp.travel;
    cin >> exp.food;
    cin >> exp.logistics;
    calculate(exp);

    return 0;
}
