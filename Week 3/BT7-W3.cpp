#include <iostream>
using namespace std;

bool unique_check(int a[], int n, int k) {
	for (int i = 0; i < n ; ++i)
	{
		if (a[k] == a[i] && i != k) return false;
	}
	return true;
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
    int min;
    int j = 0;
    while (j < n)
    {
    	if (unique_check(arr, n, j))
    	{
    		min = arr[j];
    		break;
		}
		else
		{
			++j;
		}
	}
    for (int i = j; i < n; ++i)
    {
    	if (min > arr[i] && unique_check(arr, n, i))
        {
        	min = arr[i];
        }
    }
    cout << "Min = " << min << endl;
	return 0;
}
