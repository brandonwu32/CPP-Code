#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    srand(1);
    int results[20] = {};
    cout << "Here are the results of your 20 dice rolls: " << endl;
    for (int i = 0; i < 20; i++)
    {
        results[i] = rand() % 7;
        cout << results[i] << " ";
    }
    cout << endl;
    int highest_consecutive = 0;
    int highest_count_number;
    int consecutive_counter = 0;
    int position_left;
    int position_right;
    for (int j = 0; j < 20; j++)
    {
        if (results[j] != results[j - 1])
        {
            consecutive_counter = 0;
        }
        if (results[j] == results[j + 1] || results[j] == results[j - 1])
        {
            consecutive_counter++;
        }
        if (consecutive_counter > highest_consecutive)
        {
            
            highest_count_number = results[j];
            highest_consecutive = consecutive_counter;
            position_right = j + 2;
            position_left = j - consecutive_counter + 1;
        }
    }
    int z = 0;
    int b = 0;
    cout << "Here is the result with longest run parenthesized: " << endl;
    while (z < 22)
    {
        if (z == position_left)
        {
            cout << "( ";
            z++;
        }
        else if (z == position_right)
        {
            cout << ") ";
            z++;
        }
        else
        {
            cout << results[b] << " ";
            z++;
            if (b < 19)
            {
                b++;
            }
        }
    }
    cout << endl;
    return 0;
}