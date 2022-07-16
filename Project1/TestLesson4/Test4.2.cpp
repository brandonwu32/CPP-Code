#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const double RATE = 5;
    const double INITIAL_BALANCE = 10000;
    const double TARGET = 2 * INITIAL_BALANCE;

    double balance = INITIAL_BALANCE;
    int year = 0;

    while (balance < TARGET)
    {
        year ++;
        balance = balance * (1 + (RATE / 100));
    }

    cout << "The investment doubled after " << year << " years." << endl;
    return 0;
}