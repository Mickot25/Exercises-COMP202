/*
Write a C++ program that prints the integers 1 to 100 using while loop.
Print only 5 integers per line.

Hint: Use x % 5.

When the value of this is 0, print a new line character otherwise print a tab character.

Note: x is the variable used for the counter.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x;

	cout << "This program will print integers from 1 to 100." << endl;

	x = 1;
	while (x<=100)
	{
		if (x % 5 != 0)
			cout << x << "\t";

		else
			cout << x << endl;

		x++;
	}

	_getch();
	return 0;
}

