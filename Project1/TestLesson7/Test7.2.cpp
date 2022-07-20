#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 25;
    int* ptr = NULL;
    ptr = &x;
    *ptr = 100;
    cout << "value of x is " << x << endl;
    return 0;
}