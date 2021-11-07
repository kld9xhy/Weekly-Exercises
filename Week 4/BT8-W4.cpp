#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s1, s2;
	cout << "Enter string S1: ";
	getline( cin, s1 );
	cout << "Enter string S2: ";
	getline( cin, s2 );
	int i = 0, count = 0;
	while ((s2.length() - i) >= s1.length())
	{
		i = (int) s2.find(s1,i);
		cout << "i = "<<i;
		if (i >= 0) 
		{
			++count;
		}
		else
		{
			break;
		}
		++i;
	}
	cout << "Number of times string S1 appears in string S2: " << count;
	return 0;
}
