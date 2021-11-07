#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter the number of elements of the array S: ";
	cin >> n;
	string s[n];
	fflush(stdin);
	cout << "Enter elements of the array S:\n";
	for (int i = 0; i < n; ++i)
	{
	getline( cin, s[i] );
	}
	int max = s[0].length();
	int maxIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		if (max < s[i].length())
		{
			max = s[i].length();
			maxIndex = i;
		}
	}
	cout << "Max element of the array S: " << s[maxIndex];
	return 0;
}
