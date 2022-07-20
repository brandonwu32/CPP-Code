#include <iostream>

using namespace std;

int main()
{
    float total = 0;
    int count = 0;
    float avg = 0;

    float values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
    float* p = values;
    for (int i = 0; i < 10; i++)
    {
        total = total + *(p + 1);
        ++count;
        cout << "values[ " << i << " ] =  " << *(p + i) << endl;
    }
    cout << "Total = " << total << endl;
    avg = total / count;   
    cout << "Average = " << avg << endl;
    return 0;
}