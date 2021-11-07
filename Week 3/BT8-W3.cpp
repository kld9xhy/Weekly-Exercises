#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter size of array: ";
	cin >> n;
	vector <int> a;
	cout << "Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0) 
		{
		a.erase(a.begin() + i);
		--i;
		--n;
		}
	}
	cout << "Array after deleting elements equal to 0: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}
