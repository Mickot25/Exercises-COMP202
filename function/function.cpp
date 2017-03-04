/*
Write a program that will produce a table fo x and y values for the given function:

y = 3x^5 - 2x^3 + x; x is from a to b in increments of 0.2.

* Input validation: a<b
* Your program should execute for as long as the user wants to continue
* Round-off results to 2 decimal places

filename: function
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double a, b;
	char choice;

	cout << "This program will compute for a function:" << endl;
	cout << "y = 3x^5 - 2x^3 + x" << endl;
	cout << "where x increments in 0.2 from a to b." << endl << endl;

	do
	{
		cout << "Input starting value (a): "; cin >> a;
		cout << "Input ending value (b): "; cin >> b;

		while (a > b)
		{
			cout << "Your ending value (b) must be greater than your starting value!" << endl;
			cout << "Please try again." << endl << endl;

			cout << "Input ending value (b): "; cin >> b;
		}

		cout << endl;

		cout << "\t\t X VALUE \t\t Y VALUE" << endl;

		for (a=a-0.0000001; a <= b; a+=(0.2))
		{
			cout << "\t\t " << fixed << setprecision(2) << a << "\t\t\t " << setprecision(0) << 3 * pow(a, 5.0) - 2 * pow(a, 3.0) + a << ".00" << endl;

		}
		cout << endl;

		cout << "Do you want to repeat the program? If yes input Y: "; cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return 0;
}