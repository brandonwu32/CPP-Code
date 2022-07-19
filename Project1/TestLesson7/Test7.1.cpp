#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 4;
    cout << "The address of x is " << &x << endl;
    cout << "The size of x is " << sizeof(x) << " bytes" << endl;
    cout << "the value in x is " << x << endl;
    return 0;
}