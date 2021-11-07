#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s;
	cout << "Enter string S: ";
	getline( cin, s );
	int i, j;
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	char temp;
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	cout << "String S after swapping i and j index: " << s;
	return 0;
}
