/*
Prolog
   a. 	Program Description: Babyname top 50%
   b. 	Author: Brandon Wu
   c. 	Date: 07-26-22
   d. 	Input variables: babynames.txt
   e. 	Process Flow: File IO
   f. 	Output variables: output.txt
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

void rand_array(double ar[10])
{
    for (int i = 0; i < 10; i++)
    {
        ar[i] = (rand() % 11) + 10;
    }
}

int avg_array(double arr[10])
{
    int total = 0;
    for (int z = 0; z < 10; z++)
    {
        total = total + arr[z];
    }
    return (total / 10);
}
int main()
{
    srand(1);
    double column1[10] = {};
    double column2[10] = {};
    string out_name;
    cout << "What is the name of your output file: (no extension needed) ";
    cin >> out_name;
    ofstream out_file;
    out_file.open(out_name + ".txt");
    rand_array(column1);
    rand_array(column2);
    out_file << setw(10) << "Column 1";
    out_file << setw(10) << "Column 2" << endl;
    for (int j = 0; j < 10; j++)
    {
        out_file << setw(8)<< column1[j];
        out_file << setw(8) << column2[j] << endl;
    }
    out_file << setw(22) << "Average of Columns" << endl;
    out_file << setw(8) << avg_array(column1);
    out_file << setw(8) << avg_array(column2);
    out_file.close();
    return 0;
}