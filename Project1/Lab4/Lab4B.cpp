/*
Prolog
   a. 	Program Description: Duplicate remover
   b. 	Author: Brandon Wu
   c. 	Date: 07-17-22
   d. 	Input variables: array1
   e. 	Process Flow: array parsing
   f. 	Output variables: array2
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int array1[100];
    int array2[100];
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
    cout << endl;
    return 0;
}