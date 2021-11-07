#include <iostream>
#include <vector>
using namespace std;

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
	vector <int> index;
    int max = arr[0];
    index.push_back(0);
    for (int i = 1; i < n; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index.clear();
            index.push_back(i);
        }
		else
        {
        	if (max == arr[i])
        	{
        		index.push_back(i);
			}
		}
    }
    cout << "Max = " << max << endl;
    cout << "Index with max value: ";
    for (int i = 0; i < index.size(); ++i)
    {
    	cout << index[i] << " ";
	}
	return 0;
}
