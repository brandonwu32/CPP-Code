#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double* maximum(double* a, int size)
{
    int i = 0;
    double maxval = 0;
    while (i < size)
    {
        if (*(a + i) > maxval)
        {
            maxval = *(a + i);
        }
        i++;
    }
    return &maxval;
}

int main()
{
    int j = 0;
    double input;
    int array_size;
    double* array = new double[20];
    cout << "What is your array: ";
    while (cin >> input)
    {
        *(array + j) = input;
        cout << *(array + j) << " ";
        j++;
    }
    array_size = j;
    cout << " is your array" << endl;
    cout << "The max value in your array is: " << *maximum(array, array_size) << endl;
    delete[] array;
    return 0;
}