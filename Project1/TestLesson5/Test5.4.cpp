#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    srand(time(0));
    for (i = 1; i <= 10; i++)
    {
        int d1 = rand() % 6 + 1;
        int d2 = rand() % 6 + 1;
        cout << d1 << " " << d2 << endl;
    }
    cout << endl;
    return 0;
}