#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int n;
	cout << "Enter N: ";
	cin >> n;
	for (int i = 2; i <= n; ++i) 
	{
		if (n % i == 0) 
		{
			cout << i;
			break;
		}
	}
	return 0;
}
