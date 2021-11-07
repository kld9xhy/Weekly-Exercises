#include <iostream>
using namespace std;

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
	cout << "Enter level of matrix (3 <= n <= 8): ";
	cin >> n;
	while (3 > n || n > 8) 
	{
		cout << "Invalid!!!\nEnter level of matrix (3 <= n <= 8): ";
		cin >> n;
	}
	int a[n][n];
	int t = 0, value = 1;
	int col = n - 1, row = n - 1;
	while (t <= n/2)
	{
		for (int i = t; i <= col; ++i) a[t][i] = value++;
		for (int i = t + 1; i <= row; ++i) a[i][col] = value++;
		for (int i = col - 1; i >= t; --i) a[row][i] = value++;
		for (int i = row - 1; i > t; --i) a[i][t] = value++;
		t++;
		row--;
		col--;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << "     ";
		}
		cout << endl;
	}
	return 0;
}
