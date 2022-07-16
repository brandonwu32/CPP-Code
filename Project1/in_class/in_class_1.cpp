#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float cost_1;
    float mpg_1;
    float maintenance_1;
    float insurance_1;
    float cost_2;
    float mpg_2;
    float maintenance_2;
    float insurance_2;

    const float years = 10;
    const float mileage_per_year = 15000;
    const float cost_per_gallon = 4;

    cout << "What is the cost of the first car: " << endl;
    cin >> cost_1;
    cout << "What is the mileage of the first car: " << endl;
    cin >> mpg_1;
    cout << "What is the maintenance of the first car: " << endl;
    cin >> maintenance_1;
    cout << "What is the insurance of the first car; " << endl;
    cin >> insurance_1;
    cout << "What is the cost of the second car: " << endl;
    cin >> cost_2;
    cout << "What is the mileage of the second car: " << endl;
    cin >> mpg_2;
    cout << "What is the maintenance of the second car: " << endl;
    cin >> maintenance_2;
    cout << "What is the insurance of the second car; " << endl;
    cin >> insurance_2;

    float operating_cost_1 = (1 / (((mpg_1 / cost_per_gallon) / mileage_per_year) / years));
    float operating_cost_2 = (1 / (((mpg_2 / cost_per_gallon) / mileage_per_year) / years));

    float total_cost_1 = cost_1 + operating_cost_1 + maintenance_1 + insurance_1;
    float total_cost_2 = cost_2 + operating_cost_2 + maintenance_2 + insurance_2;

    float total_cost_diff = abs(total_cost_1 - total_cost_2);
    
    cout << fixed << setprecision(2) << "Total cost for Car 1 is: $" << total_cost_1 << endl;
    cout << fixed << setprecision(2) << "Total cost for Car 2 is: $" << total_cost_2 << endl;

    if (total_cost_1 < total_cost_2) {
        cout << fixed << setprecision(2) << "Car 1 is a better buy because it is $" << total_cost_diff << " cheaper" << endl;
    }
    else {
        cout << fixed << setprecision(2) << "Car 2 is a better buy because it is $" << total_cost_diff << " cheaper" << endl;
    }
    system("pause");
    return 0;
}