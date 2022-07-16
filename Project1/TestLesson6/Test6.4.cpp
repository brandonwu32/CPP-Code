#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float total = 0;
    float avg = 0;
    float number;
    float new_number;
    float count = 0;
    double max = -999;
    double min = 999;
    int position = 0;
    float values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
    for (int i = 0 ; i < 10 ; ++i)
    {
        total = total + values[i];
        ++count;
        cout << "values[ " << i << " ] = " << values[i] << endl;
        if (values[i] > max)
        {
            max = values[i];
        }
        if (values[i] < min)
        {
            min = values[i];
        }

    }
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value = " << max << endl;
    cout << "Smallest value = " << min << endl;
    cout << "Please enter a number and new numer to replace it " << endl;
    cin >> number >> new_number;
    for (int i = 0; i < 10; i++)
    {
        if (values[i] == number)
            position = i + 1;
    }
    if (position == 0)
    {
        cout << "Number not found!" << endl;
        return 1;
    }
    else
    {
        cout << "Position = " << position << endl;
    }
    values[position - 1] = new_number;
    for (int i = 0; i < 10; ++i)
    {
        cout << "values[ " << i << " ] = " << values[i] << endl;
    }

    return 0;
}