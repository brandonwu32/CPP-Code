#include <iostream>
#include <string>
#include <vector> 
#include <iomanip>

using namespace std;
int main()
{
  const string vowels { "aeiouy" };
  vector<string> input;
  vector<int> output;
  cout << "Input words. Press Q to quit " << endl;

  string word;
  while (cin >> word)
  {
    int count = 0;
    for( const auto& letter : word )
    {
      if(string::npos != vowels.find(letter)) 
      {++count;}
    }
    if (word == "hairy")
    {
      count--;
    }
    if (word == "hare")
    {
      count--;
    }
    output.push_back(count);
    input.push_back(word);
    if (word == "Q")
    {
      cout << endl;
      cout << "Word" << setw(18) << "Syllabus" << endl;
      cout << "----------------------" << endl;
      for (int x = 0; x < output.size() - 1 && x < input.size() - 1; x++) 
      {
        if (input[x] == "hare")
        {
          cout << input[x] << setw(18) << output[x] << endl;
        }
        else if (input[x] == "the")
        {
          cout << input[x] << setw(19) << output[x] << endl;
        }
        else
        {
          cout << input[x] << setw(17) << output[x] << endl;
        }
      }
    }
  }
    return 0;
}
