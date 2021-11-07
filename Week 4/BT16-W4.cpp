#include <iostream>
#include <string>
using namespace std;

bool is_s1_a_substring_of_s2(string s1, int n, string s2, int m)
{
    int i, j, k;
    if(m < n)
    {
    	return false;
	}
    for(i = 0; i < m; ++i)
    {
        if(s1[0] == s2[i] && m - i >= n)
        {
            k = i + 1;
            j = 1;
            while (j < n)
            {
            	while (s1[j] != s2[k])
                {
                    ++k;
                    if (k >= m) break;
                }
                if ((j == n - 1) && (s1[n - 1] == s2[k])) return true;
                ++j;
                ++k;
                if ((m - k) < (n - j)) return false;
			}
        }
    }
    return false;
}

int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    string s1, s2;
	cout << "Enter string S1: ";
	getline( cin, s1 );
	cout << "Enter string S2: ";
	getline( cin, s2 );
	if (is_s1_a_substring_of_s2(s1, s1.length(), s2, s2.length()))
	{
        cout << "a is a substring of b ";
	}
    else
    {
        cout << "a is not a substring of b ";
	}
	return 0;
}
