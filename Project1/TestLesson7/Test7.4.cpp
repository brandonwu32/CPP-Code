#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    int count = 0;
    cout << "Enter 5 numbers " << endl;
    for (count = 0; count < 5; count++)
    {
        cin >> *(numbers + count);
    }
    
    cout << "Here are the numbers "
    return 0;
}