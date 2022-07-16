#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int floor;
    bool more = true;
    string answer;
    while (more)
    {
        cout << "Please enter the floor number: ";
        cin >> floor;
        if (cin.fail())
        {
            cout << "Error: Not an integer." << endl;
            cin.clear();
            cin.ignore();
            return -1;
        }
        else if (floor <= 0 || floor > 20)
        {
            cout << "Error: The floor must be between 1 and 20." << endl;
        }
        else if (floor == 13)
        {
            cout << "Error: There is no thirteenth floor." << endl;
        }
        else
        {
            break;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> answer;
        if (answer != "y")
        {
            more = false;
        }
    }
    int actual_floor;
        if (floor < 13){
            actual_floor = floor - 1;
        }
        else{
            actual_floor = floor;
        }

        cout << "The elevator will take you to floor " << actual_floor << endl;
        return 0;
}