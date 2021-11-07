#include <iostream>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int c;
	cout << "Enter c: ";
	cin >> c;
	int low = 0, high = 0, equal = 0;
    int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] > c)
		{
			high++;
		}
		else
		{
			if (arr[i] == c)
			{
				equal++;
			}
			else
			{
				low++;
			}
		}
	}
	cout << "Number of numbers equal to c: " << equal << endl;
	cout << "Number of numbers higher than c: " << high << endl;
	cout << "Number of numbers lower than c: " << low << endl;
	return 0;
}
