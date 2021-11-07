#include <iostream>
#include <string>
using namespace std;

string getName(string s) {
	int lastBlankIndex;
	for (int i = 1; i < s.length() - 1; ++i)
	{
		if (s[i] == ' ')
		{
			lastBlankIndex = i;
		}
	}
	string name;
    for (int i = lastBlankIndex + 1; i < s.length(); ++i)
    {
    	name.push_back(s[i]);
	}
	return name;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter the number of students: ";
	cin >> n;
	string s[n];
	fflush(stdin);
	int count = 0;
	cout << "Enter names of student:\n";
	for (int i = 0; i < n; ++i)
	{
		getline( cin, s[i] );
		if (!getName(s[i]).compare("An")) count++;
	}
	cout << "Number of students named An: " << count;
	return 0;
}
