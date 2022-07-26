#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    string name;
    double value;
    ifstream in_file;
    ofstream out_file;
    in_file.open("input.dat");
    if (in_file.fail())
    {
        cout << "File not found" << endl;
        return 1;
    }
    out_file.open("output.txt");
    while (in_file >> name >> value)
    {
        cout << "Name is " << name << " and Value is " << value << endl;
        out_file << "Name is " << name << " and Value is " << value << endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}
