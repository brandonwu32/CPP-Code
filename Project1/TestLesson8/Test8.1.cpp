#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    fstream in_file;
    in_file.open("input.txt");
    cout << in_file;
}