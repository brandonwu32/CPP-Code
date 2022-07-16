#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "        1       2       3       4" << endl;
    cout << "       X       X       X       X" << endl << endl;
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 4; ++j)
        {
            cout << setw(8) << pow(i,j);
        }
        cout << endl;
    }
    return 0;
}