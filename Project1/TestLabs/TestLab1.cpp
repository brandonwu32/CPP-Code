/*
Prolog
   a. 	Program Description: Car miles and price
   b. 	Author: Brandon Wu
   c. 	Date: 06-30-22
   d. 	Input variables: gas, fuel efficiency, price of gas
   e. 	Process Flow: Operations, string manipulation
   f. 	Output variables: total_price, distance
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double gas;
    double fuel_efficiency;
    double price_of_gas;
    float total_price = 0;
    float distance = 0;
    int const miles = 100;
    cout << "How much gas is left in the tank: ";
    cin >> gas;
    cout << "What is the fuel efficiency in miles per gallon: ";
    cin >> fuel_efficiency;
    cout << "What is the price of gas per gallon: ";
    cin >> price_of_gas;
    total_price = price_of_gas * miles;
    distance = gas * fuel_efficiency;
    cout << fixed << setprecision(2) << "To go 100 miles, you must pay: $" << total_price << endl;
    cout << "The car can go " << distance << " miles with the current amount of gas in its tank" << endl;
    system ("pause");
    return 0;
}