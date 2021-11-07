#include <iostream>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[999],l[999],t[999];
	cout << "Enter elements of array: ";
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i <= n; ++i) 
	{
		l[i] = 0;
	}
	l[n+1] = 1;
	for (int i = n; i >= 0; --i)
	{
		int jMax = i;
		for (int j = i + 1; j <= n + 1; j++)
		{
			if (arr[i] < arr[j] && l[j] > l[jMax])
			{
				jMax = j;
			}
		}
		l[i] = l[jMax] + 1;
		t[i] = jMax;
	}
	int i = 0;
	cout << "Longest incrementing subarray: ";
	int count = 0;
	while (t[i] < n + 1)
	{
		if (count == (l[0] - 1)) break;
		cout << arr[t[i]] << " ";
		i = t[i];
		count++;
	}
	return 0;
}
