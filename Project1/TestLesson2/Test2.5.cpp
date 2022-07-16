#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    cout << "Please input your name: ";
    cin >> name;
    int counter = 0;
    while (counter < name.length()){
        cout << name.substr(counter, 1) << endl;
        counter++;
    }
    return 0;
}