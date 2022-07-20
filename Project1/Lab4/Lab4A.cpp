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

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size)
    {
        return false;
    }
    int counter = 0;
    while (counter < a_size)
    {
        if (a[counter] != b[counter])
        {
            return false;
            break;
        }
        counter++;
    }
    return true;
}

int main()
{
    int array1[20];
    int array2[20];
    int array1_size;
    int array2_size;
    cout << "What is your first array: " << endl;
    int input1;
    int counter1 = 0;
    while (cin >> input1)
    {
        if (cin.fail())
        {
            break;
        }
        else if (input1 < 0)
        {
            cout << "You can only add posiive integers" << endl;
        }
        else
        {
            array1[counter1] = input1;
            counter1++;
        }
    }
    array1_size = counter1;
    cin.clear();
    cin.ignore();
    cout << "Array 1 is: { ";
    for (int l = 0; l < array1_size; l++)
    {
        cout << array1[l] << " ";
    }
    cout << " }" << endl;
    cout << "What is the next array: " << endl;
    int input2;
    int counter2 = 0;
    while (cin >> input2)
    {
        if (cin.fail())
        {
            break;
        }
        else if (input2 < 0)
        {
            cout << "You can only add positive integers" << endl;
        }
        else
        {
            array2[counter2] = input2;
            counter2++;
        }
    }
    array2_size = counter2;
    cout << "Array 2 is: { ";
    for (int f = 0; f < array2_size; f++)
    {
        cout << array2[f] << " ";
    }
    cout << "}" << endl;
    cout << "Size of first array: " << array1_size << endl;
    cout << "Size of second array: " << array2_size << endl;
    if (equals(array1, array1_size, array2, array2_size))
    {
        cout << "Both arrays are the same" << endl;
    }
    else
    {
        cout << "The two arrays are different" << endl;
    }
    return 0;
}