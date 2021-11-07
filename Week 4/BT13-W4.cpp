#include <iostream>
#include <string>
using namespace std;

char getFirstLetterOfName(string s) {
	int lastBlankIndex;
	for (int i = 1; i < s.length() - 1; ++i)
	{
		if (s[i] == ' ')
		{
			lastBlankIndex = i;
		}
	}
	return s[lastBlankIndex + 1];
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
		if (getFirstLetterOfName(s[i]) == 'H') count++;
	}
	cout << "Number of students has a name that starts with the letter H : " << count;
	return 0;
}
