#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int tax_liability;
    float const tax_rate1 = 0.1;
    float const tax_rate2 = 0.25;
    float const limit1 = 32000;
    float const limit2 = 64000;
    cout << "Please enter your marital status: ";
    string marital_status;
    cin >> marital_status;
    cout << "Please enter your income: ";
    double income;
    cin >> income;
    if (marital_status == "Single" && income < 32000) 
    {
        tax_liability = income * tax_rate1;
    }
    else if (marital_status == "Single" && income > 32000)
    {
        tax_liability = (limit1 / 10) + (income - limit1) * tax_rate2;
    }
    else if (marital_status == "Married" && income < 64000)
    {
        tax_liability = income * tax_rate1;
    }
    else if (marital_status == "Married" && income > 64000)
    {
        tax_liability = (limit2 / 10) + (income - limit2) * tax_rate2;
    }
    cout << fixed << setprecision(2) << "Your tax liabiliy is: $" << tax_liability << endl;
    cout << "\"HELLO\"";
    return 0;
}