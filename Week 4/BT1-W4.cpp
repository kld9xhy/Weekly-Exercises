#include <iostream>
#include <string>
using namespace std;

string formatName(string input)
{
	while (input[0] == ' ') input.erase(input.begin());
	for (int i = 1; i < (input.length() - 1); ++i)
	if (input[i] == ' ' && input[i+1] == ' ') 
	{
    	input.erase(input.begin() + i);
    	i--;
	}
	while (input[input.length() - 1] == ' ')
	{
		input.erase(input.begin() + input.length() - 1);
	}
	return input;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string name;
	cout << "Enter your full name: ";
	getline( cin, name );
    cout << "Your full name: " << formatName(name);
    return 0;
}
