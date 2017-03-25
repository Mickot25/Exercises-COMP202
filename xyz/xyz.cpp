/*
Write a program that calculates and displays values for y when

y = x*z/(x-z)

Your program should calculates for values of x from 1 to 5
and values of z fom 2 to 6.

The x variable should control the outer loop and be incremented in steps of 1.
Your program should also display the message "Function Undefined" when x and z values are equal

filename: xyz
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	double x, z;

	cout << "Equation: y = x * z / (x-z)" << endl << endl;

	for (x = 1; x <= 5; x++)
	{
		for (z = 2; z <= 6; z++)
		{
			if (x != z)
			{
				if (z != 6)
					cout << "x = " << x << " , z = " << z << " is = " << x*z / (x - z) << endl;

				else
					cout << "x = " << x << " , z = " << z << " is = " << x*z / (x - z) << endl << endl;
			}

			else
			{
				if (z != 6)
					cout << "x = " << x << " , z = " << z << " is = " << "Function Undefined" << endl;

				else
					cout << "x = " << x << " , z = " << z << " is = " << "Function Undefined" << endl << endl;
			}
		}
	}

	_getch();
	return 0;
}