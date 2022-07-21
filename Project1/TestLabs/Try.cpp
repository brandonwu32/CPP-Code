#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int max, count = 1, max_count = 1, last_index = 0;
	max = 6;
	srand(time(0));
	int a[20];
	for (int i = 0; i < 20; i++)
	{
		a[i] = (rand() % max) + 1;

	}
	for (int i = 0; i < 19; i++)
	{
		if (a[i] == a[i + 1])
		{
			count = count + 1;

		}
		else
		{
			if (count > max_count)
			{
				last_index = i;
				max_count = count;

			}
			count = 1;
		}
	}
	cout << "Out of the 20 random die tosses, the longest run is from index " << last_index - max_count + 1 << " to " << last_index << "\n";
	for (int i = 0; i < 20; i++)
	{
		if (i == last_index - max_count + 1)
		{
			cout << "( " << a[i] << " ";
		}
		else if (i == last_index)
		{
			cout << a[i] << " ) ";
		}
		else
		{
			cout << a[i] << " ";
		}
	}
	return 0;

} 