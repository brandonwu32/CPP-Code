#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>


using namespace std;


const int COLUMNS = 3;
int row_total(int table[][COLUMNS], int row)
{
    int total = 0;
    for (int j = 0; j < COLUMNS; j++)
    {
        total = total + table[row][j];
    }
    return total;
}

int column_total(int table[][COLUMNS], int rows, int col)
{
    int total = 0;
    for (int i = 0; i < rows; i++)
    {
        total = total + table[i][col];
    }
    return total;
}


int main()
{
    const int COUNTRIES = 7;
    const int MEDALS = 3;
    string countries[] = 
    {
        "Canada",
        "China",
        "Germany",
        "Korea",
        "Japan",
        "Russia",
        "United States"
    };

    int counts[COUNTRIES][MEDALS] = 
        {
            {1,0,1},
            {1,1,0},
            {0,0,1},
            {1,0,0},
            {0,1,1},
            {0,1,1},
            {1,1,0}    
        };
    cout << setw(50) << "Country   Gold   Silver   Bronze   Total" << endl;
    for (int i = 0; i < COUNTRIES; i++)
    {
        cout << setw(15) << countries[i];
        for (int j = 0; j < MEDALS; j++)
        {
            cout << setw(8) << counts[i][j];
        }
        int total = row_total(counts, i);
        cout << setw(8) << total << endl;
    }
    cout << setw(15) << "Total";
    for (int i = 0; i < 3; ++i)
    {
        cout << setw(8) << column_total(counts, 7, i);
    }
    cout << endl;
    return 0;
}

