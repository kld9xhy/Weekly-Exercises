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
    int min = arr[0];
    index.push_back(0);
    for (int i = 1; i < n; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
            index.clear();
            index.push_back(i);
        }
		else
        {
        	if (min == arr[i])
        	{
        		index.push_back(i);
			}
		}
    }
    cout << "Min = " << min << endl;
    cout << "Index with min value: ";
    for (int i = 0; i < index.size(); ++i)
    {
    	cout << index[i] << " ";
	}
	return 0;
}
