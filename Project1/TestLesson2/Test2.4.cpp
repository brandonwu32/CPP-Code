#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    cout << "Please input your name: ";
    cin >> name;
    for (int i = 0; i < name.length(); ++i){
        cout << "letter is: " << name.substr(i, 1) << endl;
    }
    return 0;
}
