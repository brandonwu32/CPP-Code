#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double richter_val;
    string effect;
    cout << "What is the magnitude of the earthquake: ";
    cin >> richter_val;
    if (richter_val >= 4.5 && richter_val < 6.0)
    {
        effect = "Damage to poorly constructed buildings";
    }
    else if (richter_val >= 6.0 && richter_val < 7.0)
    {
        effect = "Many buildings considerably damaged, some collapse";
    }
    else if (richter_val >= 7.0 && richter_val < 8)
    {
        effect = "Many buildings destroyed";
    }
    else if (richter_val == 8)
    {
        effect = "Many structures fall";
    }
    else
    {
        effect = "No Damage to buildings";
    }
    cout << "The effect of the earthquake given the magnitude is: " << effect << endl;
    return 0;
}