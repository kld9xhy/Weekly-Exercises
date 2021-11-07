#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s;
	cout << "Enter string S: ";
	getline( cin, s );
	for (int i = s.length() - 1; i >= 0; --i)
	{
		if (s[i] >= 48 && s[i] <= 57) s[i] = '$';
	}
	cout << "String S after converting: " << s << endl;
	return 0;
}
