#include <iostream>
#include <cmath>

using namespace std;

void diff(float first, float second)
{
    float difference = first - second;
    cout << "Difference is : " << difference << endl;
    return;
}
void total(float first, float second)
{
    float total = first + second;
    cout << "The total is : "<< total << endl;
    return;
}
void prod(float first, float second)
{
    float product = first * second;
    cout << "Product is : " << product << endl;
    return;
}
void quot (float first, float second)
{
    float quotient = first / second;
    cout << "Quotient is : " << quotient << endl;
    return;
}
int main()
{
    float first;
    float second;
    cout << "Please enter the first value ";
    cin >> first;
    cout << "Please enter the second value ";
    cin >> second;
    total (first, second);
    diff (first, second);
    prod (first, second);
    quot (first, second);
    return 0;
}