#include <iostream>
#include <string>
using namespace std;

string getMiddleName(string s) {
	int lastBlankIndex;
	int i = 1;
	while (s[i] != ' ')
	{
		i++;
	}
	i++;
	string middleName;
	while (s[i] != ' ')
	{
		middleName.push_back(s[i]);
		i++;
	}
	return middleName;
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
		if (!getMiddleName(s[i]).compare("Thi")) count++;
	}
	cout << "Number of students with middle name is Thi: " << count;
	return 0;
}
