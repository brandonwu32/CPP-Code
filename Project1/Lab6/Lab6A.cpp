#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string number;
    string name;
    string ID;
    string percent;
    string name2;
    string ID2;
    string percent2;
    ifstream in_file;
    ofstream out_file;
    in_file.open("baby.txt");
    out_file.open("new.txt");
    while (in_file >> number >> name >> ID >> percent >> name2 >> ID2 >> percent2)
    {
        out_file << number << name << ID << percent << name2 << ID2 << percent2 << endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}