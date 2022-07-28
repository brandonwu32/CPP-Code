#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string infile_name;
    string outfile_name;
    ifstream in_file;
    ofstream out_file;
    string line;
    string array_strings[10] = {};
    int count = 0;
    cout << "What is the name of your input file: ";
    cin >> infile_name;
    in_file.open(infile_name + ".txt");
    cout << "Here are the contents of your input file: " << endl;
    while (getline(in_file, line))
    {
        cout << line << endl;
        array_strings[count] = line;
        count++;
    }
    cout << endl;
    cout << "What is the name of your output file: ";
    cin >> outfile_name;
    out_file.open(outfile_name + ".txt");
    cout << "Here are the contents of your output file: " << endl;
    for (int i = count - 1; i >= 0; i--)
    {
        cout << array_strings[i] << endl;
        out_file << array_strings[i] << endl;
    }
    out_file.close();
    in_file.close();
    return 0;
}