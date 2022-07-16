#include <cmath>
#include <iostream>

using namespace std;
int i;
int j;
int main()
{
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}