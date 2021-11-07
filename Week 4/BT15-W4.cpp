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
	s2.insert(s2.length()/2, s1);
	cout << "String S2 after being inserted with string S1: " << s2;
	return 0;
}
