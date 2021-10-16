#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	cout << "1 ";
	int count = 0;
    for (int i = 2; ++i;)
    {
    	if (count == 4) break;
    	int divisor_sum = 0;
        for (int j = 1; j <= i/2; j++)
        {
            if (i % j == 0)
            {
            	divisor_sum += j;
			}
		}
        if (divisor_sum == i)
		{	
            	cout << i << " ";
                count++;
        }
    }
    return 0;
}
