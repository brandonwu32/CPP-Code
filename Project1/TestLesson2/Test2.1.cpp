#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int counter = 1;
    int num = 0;
    int tr = 1;
    num = counter++; //postfix num = counter, counter = counter + 1
    cout << fixed << setprecision(2) << "counter = " << counter << endl;
    cout << fixed << setprecision(2) << "num = " << num << endl;
    counter = 1;
    num = ++counter; //prefix = counter + 1, num = counter
    cout << fixed << setprecision(2) << "counter = " << counter << endl;
    cout << fixed << setprecision(2) <<"num = " << num << endl;
    system("pause");
    return 0;
}