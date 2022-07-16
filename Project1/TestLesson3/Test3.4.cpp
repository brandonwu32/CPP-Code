#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int floor;
    cout << "What floor would you like to get to: ";
    cin >> floor;
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