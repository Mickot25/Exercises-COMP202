#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int k = 21;

	do
	{
		switch (k % 10)
		{
		case 0: cout << k << "\t"; break;
		case 1: cout << k + 10 << "\t"; break;
		case 2: cout << k + 20 << "\t";
		case 3: cout << k + 30 << "\t"; break;
		default: cout << k + 40 << "\t"; break;
		}

		k += 11;

		cout << endl;
	} while (k % 10 <= 3);

	_getch();
	return 0;
}