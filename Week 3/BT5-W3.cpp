#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	int count_prime = 0;
	int count_compositeNum = 0;
	cout << "Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (isPrime(arr[i]))
		{
			count_prime++;
		}
		else
		{
			if (arr[i] != 1)
			{
			count_compositeNum++;
			}
		}
	}
	cout << "Number of Prime number: " << count_prime << endl;
	cout << "Number of Composite number: " << count_compositeNum << endl;
    return 0;
}
