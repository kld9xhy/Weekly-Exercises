#include <iostream>
using namespace std;

bool is_b_contain_a(int a[], int n, int b[], int m)
{
    int i, j, k;
    if(m < n)
    {
    	return false;
	}
    for(i = 0; i < m; ++i)
    {
        if(a[0] == b[i] && m - i >= n)
        {
            k = i + 1;
            j = 1;
            while (j < n)
            {
            	while (a[j] != b[k])
                {
                    ++k;
                    if (k >= m) break;
                }
                ++j;
                ++k;
                if ((m - k) < (n - j)) return false;
                if (a[n - 1] == b[k]) return true;
			}
        }
    }
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n, m;
	cout << "Enter size of array a: ";
	cin >> n;
	cout << "Enter size of array b: ";
	cin >> m;
	int a[n],b[m];
	cout << "Enter elements of array a: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "Enter elements of array b: ";
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	if (is_b_contain_a(a, n, b, m))
	{
        cout << "a is a subsequence of b ";
	}
    else
    {
        cout << "a is not a subsequence of b ";
	}
	return 0;
}
