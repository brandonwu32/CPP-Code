#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double const EPSILON = 1E-14;
    double r = sqrt(2);
    if (fabs(r * r - 2) < EPSILON)
    {
        cout << "Sqrt(2) squared is 2" << endl;

    }
    else
    {
        cout<< "sqrt(2) squared is not 2 but "
        << setprecision(18) << r*r << endl;
    }
    
}