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


double* pointer = NULL;
void reverse(double* a, int size)
{
   double new_array[20] = {};
   for (int i = 0; i < size; i++)
   {
      pointer = &a[(size - 1) - i]; //we do not need this part but we add it for the sake of the requirements
      new_array[i] = *pointer; // we could just do: new_array[i] = *(a + (size - 1) + i); or new_array = *(&a[(size - 1) - i])
   }
   for (int j = 0; j < size; j++)
   {
      cout << new_array[j] << " ";
   }
}

int main()
{
   double array[20] = {};
   double input;
   int counter = 0;
   cout << "What is your array" << endl;
   while (cin >> input)
   {
      if (cin.fail())
      {
         cin.clear();
         cin.ignore();
         break;
      }
      array[counter] = input;
      counter++;
   }
   cout << "Your initial array is: { ";
   for (int b = 0; b < counter; b++)
   {
      cout << array[b] << " ";
   }
   cout << "}" << endl;
   cout << "Your reversed array is: { ";
   reverse(array, counter);
   cout << "}"; 
   cout << endl;
   return 0;
}