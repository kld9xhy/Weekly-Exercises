#include <iostream>
using namespace std;
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    for (int i = 21; i < 100; i+=21)
    {
        if (i % 3 == 0 && i % 7 == 0)
		{	
            	cout << i << " ";
        }
    }
    return 0;
}
