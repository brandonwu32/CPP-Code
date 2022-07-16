#include <iostream>

using namespace std;

int main()
{
    float first;
    float second;
    float sum;
    float diff;
    float prod;
    float quot;
    cout <<"Please enter the first value: ";
    cin >> first;
    cout <<"Please enter the second value: ";
    cin >> second;
    sum = first + second;
    diff = first - sum;
    prod = first * second;
    quot = first / second;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;
    cout << "quot = " << quot << endl;
    system("pause");
    return 0;
}