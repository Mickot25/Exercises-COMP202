/*
Get the sum of:
x-1, x-2, x-3 ... x-n

x and n is entered by the user.

where:
n is the number of terms.
x is the number constant.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, n, sum, counter;
	cout << "Input constant (x): "; cin >> x;
	cout << "Input number of terms (n): "; cin >> n;

	for (sum = 0, counter = 1; counter <= n; counter++)
	{
		sum += (x - counter);
		cout << x << " - " << counter << endl;
	}
	cout << "Sum = " << sum << endl;

	_getch();
	return 0;
}