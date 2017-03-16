#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int k = 20, N = 1;

	for (int y = 1; y <= 12; y++, k--)
	{
		if (y % 3 != 0)
			continue;
		N += y;
	}

	cout << N << endl << k << endl;

	_getch();
	return 0;
}