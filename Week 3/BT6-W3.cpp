#include <iostream>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout << "Array you want to find: ";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[j] % arr[i] == 0 && i != j)
			{
				cout << arr[i] << " ";
				break;
			}
		}
	}
	return 0;
}
