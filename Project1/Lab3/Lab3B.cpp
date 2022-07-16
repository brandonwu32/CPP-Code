/*
Prolog
   a. 	Program Description: Raise function
   b. 	Author: Brandon Wu
   c. 	Date: 07-11-22
   d. 	Input variables: r, h
   e. 	Process Flow: defining functions, operations
   f. 	Output variables: new_salary
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double read_double(string prompt)
{
   cout << prompt;
   return 0;
}

double raise(double salary, double percent)
{
   double new_salary = salary * (1 + (percent / 100));
   cout << fixed << setprecision(2) << "Your new salary is: $" << new_salary << endl;
   return 0;
}

int main()
{
   double s;
   double p;
   while (true)
   {
      read_double("What is your current salary: ");
      cin >> s;
      if (s < 0)
      {
         cout << "Negative number not allowed" << endl;
      }
      else
      {
         read_double("What is your desired raise percentage: ");
         cin >> p;
         if (p < 0)
         {
            cout << "Negative number not allowed" << endl;
         }
         else
         {
            raise(s, p);
         }
      }
      cout << "Would you like to continue? (y/n) ";
      string ans;
      cin >> ans;
      if (ans != "y")
      {
         break;
      }
   }
   return 0;
}