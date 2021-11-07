#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s;
	cout << "Enter the string: ";
	getline( cin, s );
	int count;
	for (int i = 0; i < (s.length() - 2); ++i)
	{
		if (s[i] == 'a')
		{
			if (s[i + 1] == 'b')
			{
				if (s[i + 2] == 'c')
				{
					++count;
				}
			}
		}
	}
	cout << "Number of times the string 'abc' occurs: " << count;
	return 0;
}
