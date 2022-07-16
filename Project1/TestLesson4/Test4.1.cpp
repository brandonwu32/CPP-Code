#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    float count = 0;
    float total = 0;
    float avg = 0;
    int num;
    cout << "Please enter the number of iterations: "<< endl;
    cin >> num;
    while (i < num)
    {
        cout << "I = " << i << endl;
        ++count;
        total += 1;
        ++i;
    }
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    return 0;
}