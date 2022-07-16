/*
Prolog
   a. 	Program Description: Elapsed time in military format
   b. 	Author: Brandon Wu
   c. 	Date: 6-23-22
   d. 	Input variables: first_time, second_time
   e. 	Process Flow: Operations, string concatenation
   f. 	Output variables: elapsed_hours, elapsed_mins
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int first_time = 0;
    int second_time = 0;
    int first_hours = 0;
    int second_hours = 0;
    float first_mins = 0;
    float second_mins = 0;
    float formatted_diff_mins = 0;
    float elapsed_time = 0;
    int elapsed_hours = 0;
    float elapsed_mins = 0;
    cout <<"Please input your first time: ";
    cin >> first_time;
    cout <<"Please input your second time: ";
    cin >> second_time;
    if (first_time < second_time) {
        first_hours = first_time / 100; 
        second_hours = second_time / 100; 
        first_mins = (first_time % 100);
        second_mins = (second_time % 100);
        formatted_diff_mins = ((second_mins / 60) - (first_mins / 60));
        elapsed_time = (second_hours - first_hours + formatted_diff_mins);
        elapsed_hours = elapsed_time;
        elapsed_mins = round((abs(formatted_diff_mins)) * 60);
        cout << "Elapsed time is " << elapsed_hours << " hours and " << elapsed_mins << " minutes"<< endl;
    }
    else {
        first_hours = first_time / 100;
        second_hours = (second_time + 2400) / 100;
        first_mins = (first_time % 100);
        second_mins = ((second_time + 2400) % 100);
        formatted_diff_mins = ((second_mins / 60)) - (first_mins / 60);
        elapsed_time = (second_hours - first_hours + formatted_diff_mins);
        elapsed_hours = elapsed_time;
        elapsed_mins = round(abs(formatted_diff_mins) * 60);
        cout << "Elapsed time is " << elapsed_hours << " hours and " << elapsed_mins << " minutes"<< endl;
    }
    system("pause");
    return 0;
}

