/*
Prolog
   a. 	Program Description: Array identical checker
   b. 	Author: Brandon Wu
   c. 	Date: 07-17-22
   d. 	Input variables: array1, array2
   e. 	Process Flow: counting algorithm and conditions
   f. 	Output variables: array1_size, array2_size, equals
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int array1[1000];
    int array2[1000];
    int input1;
    int input2;
    int counter1 = 0;
    int counter2 = 0;
    cout << "What is the initial array" << endl;
    while (cin >> input1)
    {
        if (cin.fail())
        {
            break;
        }
        array1[counter1] = input1;
        counter1++;
    }
    for (int i = 0; i < counter1; ++i)
    {
        bool duplicated = false;
        for (int j = 0; j <= counter2; ++j)
        {
            if (array1[i] == array2[j])
            {
                duplicated = true;
            }
        }
        if (!duplicated)
        {
            array2[counter2] = array1[i];
            counter2++;
        }
    }
    cout << "Your new array is " << endl;
    for (int z = 0; z < counter2; z++)
    {
        cout << array2[z] << " "; 
    }
    return 0;
}