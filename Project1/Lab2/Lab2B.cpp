/*
Prolog
   a. 	Program Description: Grade Letter Conversion
   b. 	Author: Brandon Wu
   c. 	Date: 06-28-22
   d. 	Input variables: words
   e. 	Process Flow: Operations, string manipulation, conditional statements
   f. 	Output variables: word[counter], syllable_count
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Please input your string: ";
    string words;
    getline(cin, words);
    int string_length = words.length();
    cout << "Words";
    cout << setw(20) << "Syllables" << endl;
    cout << "_________________________" << endl;
    int counter;
    int syllable_count = 0;
    char last_vowel_position;
    int total_words = 0;
    int consecutive_vowel_count = 0;
    for (counter = 0; counter <= string_length; counter++)
    {
        if (words[counter] == 'a' || words[counter] == 'e' || words[counter] == 'i' || words[counter] == 'o' || words[counter] == 'u' || words[counter] == 'y')
        {
            consecutive_vowel_count += 1;
            total_words += 1;
            last_vowel_position = words[counter];
            if (consecutive_vowel_count == 1)
            {
                syllable_count += 1;
            }
            cout << words[counter];
        }
        else if (words[counter] == ' ' || words[-1] == words[counter])
        {
            if (last_vowel_position == 'e')
            {
                syllable_count -= 1;
            }
            if (syllable_count  == 0)
            {
                syllable_count += 1;
            }
            cout << setw(20 - total_words) << syllable_count << endl;
            syllable_count = 0;
            total_words = 0;
        }
        else
        {
            consecutive_vowel_count = 0;
            total_words += 1;
            cout << words[counter];
        }
    }
    return 0;
}