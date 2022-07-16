#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int floor;
    cout << "Floor: ";
    cin >> floor;
    if (cin.fail()) 
    {
        cout << "Error: Not an integer." << endl;
        return 1;
    }
    if (floor == 13)
    {
        cout << "Error there is no thirteenth floor."<< endl;
        return 1;
    }
    if (floor <= 0 || floor > 20) 
    {
        cout << "Error: the floor must be between 1 and 20." << endl;
        return 1;
    }
    if (floor < 13)
    {
        floor = floor - 1;
    }
    cout << "You are at floor " << floor << endl;
    return 0;
}