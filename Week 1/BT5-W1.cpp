#include <iostream>
using namespace std;
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    for (int i = 1000; i < 2000;)
    {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		{	
            cout << i << " ";
            i+=3*5*7;
        } else
        {
        	i++;
		}
    }
    return 0;
}
