#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float first_time;
    float second_time;
    cout <<"Please input your first time: ";
    cin >> first_time;
    cout <<"Please input your second time: ";
    cin >> second_time;
    if (first_time < second_time) {
        int first_hours = first_time / 100;
        int second_hours = second_time / 100;
        float first_mins = (((first_time / 100) - first_hours) * 100);
        float second_mins = (((second_time / 100) - second_hours) * 100);
        float formatted_diff_mins = ((second_mins / 60) - (first_mins / 60));
        int diff_hours = second_hours - first_hours;
        float elapsed_time = (second_hours - first_hours + formatted_diff_mins);
        int elapsed_hours = elapsed_time;
        float elapsed_mins = round((abs(formatted_diff_mins)) * 60);
        cout << "Elapsed time is  " << elapsed_hours << " hours and " << elapsed_mins << " minutes"<< endl;
    }
    else {
        int first_hours = first_time / 100;
        int second_hours = second_time / 100;
        float first_mins = (((first_time / 100) - first_hours) * 100);
        float second_mins = (((second_time / 100) - second_hours) * 100);
        float formatted_diff_mins = ((first_mins / 60) - (second_mins / 60));
        int diff_hours = first_hours - second_hours;
        float elapsed_time = (first_hours - second_hours + formatted_diff_mins);
        int elapsed_hours = elapsed_time;
        float elapsed_mins = round(abs(formatted_diff_mins) * 60);
        cout << "Elapsed time is " << elapsed_hours << " hours and " << elapsed_mins << " minutes"<< endl;
    }
    system("pause");
    return 0;
}