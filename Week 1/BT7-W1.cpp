#include <iostream>
using namespace std;
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0;
    for (int i = 0 ; i <= 100 ; ++i)
    {
    	switch (i % 5)
    	{
    		case 0:
    			count_0++;
    			break;
    		case 1:
    			count_1++;
    			break;
    		case 2:
    			count_2++;
    			break;
    		case 3:
    			count_3++;
    			break;
    			default:
    			break;
		}
    }
    cout << "a. " << count_0 << endl;
    cout << "b. " << count_1 << endl;
    cout << "c. " << count_2 << endl;
    cout << "d. " << count_3;
    return 0;
}
