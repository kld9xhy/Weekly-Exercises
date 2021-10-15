#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
	cout<<"20173193 - Ngo Quoc Khanh - 709155\n";
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "N-th Fibonacci number:  " << Fibonacci(n);
    return 0;
}
