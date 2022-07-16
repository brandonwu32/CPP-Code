/*
Prolog
   a. 	Program Description: Savings after 10 years with 5% interest
   b. 	Author: Brandon Wu
   c. 	Date: 06-23-22
   d. 	Input variables: principal
   e. 	Process Flow: Operations, string manipulation
   f. 	Output variables: first_year, second_year, third_year, fourth_year, fifth_year
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float principal;
    float const interest = 1.05;
    float first_year;
    float second_year;
    float third_year;
    float fifth_year;
    float fourth_year;
    cout << "Principal Amount: ";
    cin >> principal;
    first_year = principal * interest;
    second_year = principal * pow(interest, 2);
    third_year = principal * pow(interest, 3);
    fourth_year = principal * pow(interest, 4);
    fifth_year = principal * pow(interest, 5);
    cout << fixed << setprecision(2) <<"Balance after first year: $" << first_year << endl;
    cout << fixed << setprecision(2) <<"Balance after second year: $" << second_year << endl;
    cout << fixed << setprecision(2) <<"Balance after third year: $" << third_year << endl;
    cout << fixed << setprecision(2) <<"Balance after fourth year: $" << fourth_year << endl;
    cout << fixed << setprecision(2) <<"Balance after fifth year: $" << fifth_year << endl;
    system("pause");
    return 0;
}