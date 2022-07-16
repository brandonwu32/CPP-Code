#include <iostream>
#include <cmath>

using namespace std;

void exchange(int first, int second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    cout << "(Exchange) First = " << first << endl;
    cout << "(Exchange) Second = " << second << endl;
    return;
}

void swap(int& first, int& second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    return;
}

int main()
{
    int first = 10;
    int second = 20;
    cout << "(Before exchange) first = " << first << endl;
    cout << "(Before exchange) second = " << second << endl;
    exchange(first, second);
    cout << "(After exchange) first = " << first << endl;
    cout << "(After exchange) second = " << second << endl;
    swap(first, second);
    cout << "(After Swap) first = " << first << endl;
    cout << "(After Swap) second = " << second << endl;
    return 0;
}