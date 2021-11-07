#include <iostream>
#include <string>
using namespace std;

void swap(char *c1, char *c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

string generateString(string s)
{
	for (int j = 0; j < 9; ++j)
	{
		swap(&s[j],&s[j+1]);
	}
	return s;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter N: ";
	cin >> n;
	string s[n+1];
	s[1] = "1111100000";
	for (int i = 2; i <= n; ++i)
	{
		s[i] = generateString(s[i-1]);
	}
	cout << "Sn: " << s[n];
	return 0;
}
