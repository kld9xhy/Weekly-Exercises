#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s;
	cout << "Enter the string: ";
	getline( cin, s );
	int count0 = 0, count1 = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '0')
		{
			++count0;
		}
		else
		{
			++count1;
		}
	}
	string s1, s2;
	for (int i = 0; i < count0; ++i)
	{
		s1.push_back('0');
	}
	for (int i = 0; i < count1; ++i)
	{
		s1.push_back('1');
	}
	for (int i = 0; i < count1; ++i)
	{
		s2.push_back('1');
	}
	for (int i = 0; i < count0; ++i)
	{
		s2.push_back('0');
	}
	cout << "String in the way 0~1: " << s1 << endl;
	cout << "String in the way 1~0: " << s2 << endl;
	return 0;
}
