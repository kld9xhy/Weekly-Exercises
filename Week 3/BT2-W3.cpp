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
	cout << "Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout << "Elements of array are Prime number: ";
	for (int i = 0; i < n; ++i)
	{
		if (isPrime(arr[i])) cout << arr[i] << " ";
	}
    return 0;
}
