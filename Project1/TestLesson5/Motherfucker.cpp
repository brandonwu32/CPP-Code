#include <iostream>

using namespace std;

int main()
{
    string alive = "alive";
    string grade;
    string answer;
    while (true)
    {
        cout << "Did you laugh at my joke? (y/n) ";
        cin >> answer;
        if (answer == "y")
        {
            grade = "A+";
            break;
        }
        else
        {
            grade = "F-";
            alive = "dead";
            cout << "Bang" << endl;
            break;
        }
    }
    cout << "Your grade for the class is " << grade << " and you are " << alive << endl;
    return 0;

}