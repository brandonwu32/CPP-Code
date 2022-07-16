#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float s1;
    float s2;
    float s3;
    cout << "Please enter your last three test scores: " << endl;
    cin >> s1 >> s2 >> s3;
    double average = (s1 + s2 + s3) / 3;
    cout << fixed << setprecision(2) << average << endl;
    return 0;
}