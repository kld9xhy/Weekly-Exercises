#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string name;
	cout << "Enter your full name: ";
	getline( cin, name );
    cout << "Your surname: ";
    int i = 0;
    while (name[i] != ' ')
    {
    	cout << name[i];
    	++i;
	}
    return 0;
}
