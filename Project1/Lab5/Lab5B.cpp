#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double input;
    int counter = 0;
    double array[10] = {};
    double input2;
    int counter2 = 0;
    double add_array[10] = {};
    double final_array[20] = {};
    double* pointer1 = NULL;
    double* pointer2 = NULL;
    double* final_pointer = NULL;
    cout << "What is your initial array: " << '\n';
    while (cin >> input)
    {
        array[counter] = input;
        counter++;
    }
    cout << "Your array is: { ";
    for (int i = 0; i < counter; i++)
    {
        cout << array[i] << " ";
    }
    cout << "}" << '\n';
    cin.clear();
    cin.ignore();
    cout << "What is the array you would like to connect: " << '\n';
    while (cin >> input2)
    {
        add_array[counter2] = input2;
        counter2++;
    }
    pointer1 = array;
    final_pointer = pointer1;
    for (int j = 0; j < counter; j++)
    {
        final_array[j] = *final_pointer;
        final_pointer++;
    }
    pointer2 = add_array;
    final_pointer = pointer2;
    for (int z = 0; z < counter + counter2; z++)
    {
        final_array[z + counter] = *final_pointer;
        final_pointer++;
    }
    cout << "Your final connected array is : { ";
    for (int b = 0; b < counter + counter2; b++)
    {
        cout << final_array[b] << " ";
    }
    cout << "}" << '\n';
    return 0;
}