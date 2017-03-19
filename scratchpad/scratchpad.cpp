#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, s = 0;
	cout << "Enter a number: "; cin >> n;

	while (n > 0)
	{
		s += (n % 10);
		n /= 10;
	}
	cout << "Sum of all digits: " << s << endl;

	_getch();
	return 0;
}
