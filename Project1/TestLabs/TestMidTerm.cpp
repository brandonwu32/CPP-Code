#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool all_the_same(double x, double y, double z)
{
    if (x == y && y == z && x == z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool all_different(double x, double y, double z)
{
    if (x != y && y != z && x != z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool sorted(double x, double y, double z)
{
    if (x < y && y < z && x < z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double input1;
    double input2;
    double input3;
    cout << "What are your three numbers: ";
    cin >> input1 >> input2 >> input3;
    if (all_the_same(input1, input2, input3))
    {
        cout << "3 numbers are identical" << endl;
    }
    else if (all_different(input1, input2, input3) && sorted(input1, input2, input3))
    {
        cout << "3 numbers are in (ascending) order" << endl;
    }
    else if (all_different(input1, input2, input3))
    {
        cout << "3 numbers are different" << endl;
    }
    return 0;
}