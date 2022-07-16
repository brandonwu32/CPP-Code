#include <iostream>
#include <cmath>

using namespace std;

int sum(int first, int second)
{
    int total = 0;
    cout << "First = " << first << endl;
    cout << "Second = " << second << endl;
    total = first + second;
    cout << "Total = " << total << endl;
    return total;
}
int diff(float no_1, float no_2)
{
    float difference = no_1 - no_2;
    cout << "Difference = "<< difference << endl;
    return 0;
}
int main()
{
    float first = 10;
    float second = 20;
    sum (first, second);
    diff (first, second);
    return 0;
}