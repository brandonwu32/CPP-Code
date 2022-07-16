#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float count = 0;
    float total = 0;
    float avg = 0;
    int num;
    cout << "Please enter the number of iterations: ";
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        cout << "I = " << i << endl;
        ++count;
        total = total + 1;
    }
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    return 0;
}