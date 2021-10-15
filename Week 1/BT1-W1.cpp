#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	for (int i = 4; i < 100 ; ++i) 
	{
	if (i % 2 == 0) cout << i << " "; 
		else 
		{
		for(int j = 3; j <= sqrt(i); j += 2)
			if (i % j == 0) 
			{
				cout << i << " ";
				break;
			}
		}
	}
	return 0;
}
