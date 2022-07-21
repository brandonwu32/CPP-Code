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

void remove_duplicate(int ar[20], int ar2[20], int size, int& size2)
{
    int count2 = 0;
    for (int i = 0; i < size; ++i)
    {
        bool duplicated = false;
        for (int j = 0; j <= count2; ++j)
        {
            if (ar[i] == ar2[j])
            {
                duplicated = true;
            }
        }
        if (!duplicated)
        {
            ar2[count2] = ar[i];
            count2++;
        }
    }
    size2 = count2;
}

int main()
{
    int array1[20];
    int array2[20];
    int input1;
    int input2;
    int counter1 = 0;
    int counter2 = 0;
    int second_size;
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
    remove_duplicate(array1, array2, counter1, second_size);
    cout << "Your array is: { ";
    for (int f = 0; f < counter1; f++)
    {
        cout << array1[f] << " ";
    }
    cout << " }" << endl;
    cout << "Your new array is " << endl;
    for (int z = 0; z < second_size; z++)
    {
        cout << array2[z] << " "; 
    }
    cout << endl;
    return 0;
}