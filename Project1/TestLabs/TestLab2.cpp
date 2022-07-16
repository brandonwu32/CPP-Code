#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float const TAX_RATE1 = 1.1;
    float const TAX_RATE2 = 1.15;
    float const TAX_RATE3 = 1.25;
    double tax_due;
    cout << "What is your taxable income: ";
    double taxable_income;
    cin >> taxable_income;
    cout << "What is your marital status: (M/S) ";
    string marital_status;
    cin >> marital_status;
    if (taxable_income <= 8000 && taxable_income > 0 && marital_status == "S")
    {
        tax_due = TAX_RATE1 * taxable_income;
    }
    else if (taxable_income <= 32000 && taxable_income > 8000 && marital_status == "S")
    {
        tax_due = 800 + (TAX_RATE2 * (taxable_income - 8000));
    }
    else if (taxable_income > 32000 && marital_status == "S")
    {
        tax_due = 4400 + (TAX_RATE3 * (taxable_income - 32000));
    }
    else if (taxable_income <= 16000 && taxable_income > 0 && marital_status == "M")
    {
        tax_due = TAX_RATE1 * taxable_income;
    }
    else if (taxable_income <= 64000 && taxable_income > 16000 && marital_status == "M")
    {
        tax_due = 1600 + (TAX_RATE2 * (taxable_income - 16000));
    }
    else if (taxable_income > 64000 && marital_status == "M")
    {
        tax_due = 8800 + (TAX_RATE3 * (taxable_income - 64000));
    }
    cout << fixed << setprecision(2) << "The amount of tax due is: $" << tax_due << endl;
    return 0;
}