#include <iostream>
using namespace std;

float CalS(int n)
{
	float s = 0, t = 0, f = 1;
	for (int i = 1; i <= n; ++i)
	{
		f *= i;
		t += f;
		s += (float) 1 / t;
	}
	return s;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int n; 
	cout << "Enter N: ";
	cin >> n;
	cout << "S = " << CalS(n);
}
