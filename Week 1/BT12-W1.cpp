#include <iostream>
using namespace std;
int main () {
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int h;
	cout <<"Enter h(2<=h<=10): ";
	cin >> h;
	while (h < 2 || h > 10) 
	{
		cout << "Invalid h!!!\nEnter h(2<=h<=10): ";
		cin >> h;
	}
	int choice;
	cout << "Type 1 if you want to print vertical triangle" << endl;
	cout << "Type 0 if you want to print reverse triangle" << endl;
	cout << "Your choice: ";
	cin >> choice;
	if (choice) 
	{
		for (int i = 1; i <= h; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	} else
	{
		for (int i = h; i >= 1; --i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}
