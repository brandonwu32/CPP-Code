#include <iostream>
#include <cmath>

using namespace std;

float sum(float data[], int size)
{
    float total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + data[i];
    }
    return total;
}

void multiply(float data[], int size, float factor)
{
    for (int i = 0; i < size; i ++)
    {
        data[i] = data[i] * factor;
    }
    return;
}

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
    avg = sum(values, size) / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value = " << max << endl;
    cout << "Smallest value = " << min << endl;
    multiply(values, size, 2);
    for (int i = 0; i < size; ++i)
    {
        cout << "values[ " << i << "] = " << values[i] << endl;
    }
    return 0;
}
