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
	int count = 1;
	int max = 0;
	int max_index = 0;
	for (int i = 0;i < n - 1; ++i)
	{
		if (arr[i] != arr[i+1])
		{
			if (count > max) {
				max = count;
				max_index = i - count + 1;
			}
			count = 1;
		}
		else
		{
			++count;
		}
	}
	cout << "Length of longest subarray: " << max << endl;
	cout << "First index of longest subarray: " << max_index;
	return 0;
}
