#include <iostream>
using namespace std;

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

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
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (arr[i] < arr[j]) 
			{
				Swap(&arr[i],&arr[j]);
			}
		}
	}
	cout << "Array after sorting: ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
    return 0;
}
