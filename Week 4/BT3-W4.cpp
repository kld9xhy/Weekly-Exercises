#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string name;
	cout << "Enter your full name: ";
	getline( cin, name );
	int lastBlankIndex;
	for (int i = 1; i < name.length() - 1; ++i)
	{
		if (name[i] == ' ')
		{
			lastBlankIndex = i;
		}
	}
    cout << "Your name: ";
    for (int i = lastBlankIndex + 1; i < name.length(); ++i)
    {
    	cout << name[i];
	}
    return 0;
}
