#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int count = 0;
    for (int i = 2; i < 1000; ++i)
    {
    	if (count == 20) break;
    	int divisor_count = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
            	divisor_count ++;
			}
		}
        if (divisor_count == 0)
		{	
            	cout << i << " ";
                count++;
        }
    }
    return 0;
}
