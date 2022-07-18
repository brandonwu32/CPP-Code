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
    int size = 0;
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
    size = count;
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value = " << max << endl;
    cout << "Smallest value = " << min << endl;
    cout << "Please enter a position " << endl;
    cin >> position;
    cout << "Please enter a number to insert" << endl;
    cin >> number;
    
    for (int i = size - 1 ; i > position - 1 ; i--)
    {
        values[i] = values[i-1];
    }
    values[position] = number;

    for (int i = 0; i < size; ++i)
    {
        cout << "values [ " << i << " ] " << values[i] << endl;
    }
    return 0;
}