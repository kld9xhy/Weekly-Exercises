#include <iostream>
using namespace std;

int main(){
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
	int n;
	cout << "Enter N: ";
	cin >> n;
    int count;
    
    for(int i = 2; i <= n; ++i)
	{
        count = 0;
        while(n % i == 0){
            ++count;
            n /= i;
        }
        if(count){
            cout << i;
            if(count > 1) cout << "^" << count;
            if(n > i){
                cout << " * ";
            }
        }
    }
    
}
