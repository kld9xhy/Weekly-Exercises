#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s;
	cout << "Enter string S: ";
	getline( cin, s );
	string s1;
	for (int i = s.length() - 1; i >= 0; --i)
	{
		s1.push_back(s[i]);
	}
	cout << "String S1: " << s1 << endl;
	return 0;
}
