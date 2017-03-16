#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y = 10;
	
	for (x = 1; x <= 3;)
	{
		do
		{
			x++;
			y--;
		} while (x % 2 == 0);
	}

	cout << x << "\t" << y << endl;

	_getch();
	return 0;
}