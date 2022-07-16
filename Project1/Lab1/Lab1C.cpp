/*
Prolog
   a. 	Program Description
   b. 	Author
   c. 	Date
   d. 	Input variables
   e. 	Process Flow
   f. 	Output variables
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string first_time;
    string second_time;
    cout << "Please enter the first time: ";
    cin >> first_time; 
    cout << "Please enter the second time: ";
    cin >> second_time;
    string str_first_time = to_integer(first_time);
    string str_second_time = to_string(second_time);
    string first_hours = str_first_time.substr(0,2);
    string second_hours = str_second_time.substr(0,2);
    string first_mins = str_first_time.substr(2,2);
    string second_mins = str_second_time.substr(2,2);
    cout << ;
    system("pause");
    return 0;
}

