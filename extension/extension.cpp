/*
The expansion of a steel bridge as it is heated to a
final Celsius temperature, Tf
from an initial temperature To,
can be approximated by using this formula:

a = coefficient of linear expansion of steel bridge is 11.7 x 10^6
Increase in length changeinL = Lo * a * deltat
Lo = length of bridge at initial temperature
Lf = final length

Using this formula, write a C++ program that displays a table of expansion for steel bridge that is L meters long
at an initial temperature, To = 0 to Tf in x-degree increments

- input validation: Tf > 0, L > 0, x is from 1 to 5.
- your program should execute for as long as the user wants to continue
- round-off results to 2 decimal places

filename: expansion
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int Tf, To = 0, increment;
	double Lo, a = 0.0000117;
	cout << "This program will compute for the linear expansion of a steel bridge from initial temperature = 0." << endl << endl;
	cout << "Input final temperature: "; cin >> Tf;

	while (Tf <= 0)
	{
		cout << "Final temperature must be greater than 0!" << endl << "Please try again." << endl << endl;
		cout << "Input final temperature: "; cin >> Tf;
	}

	cout << "Input initial length: "; cin >> Lo;

	while (Lo <= 0)
	{
		cout << "Your initial length must be greater than 0!" << endl << "Please try again" << endl << endl;
		cout << "Input initial length: "; cin >> Lo;
	}
	cout << "Input increment of temperature from 1-5: "; cin >> increment;

	while (increment < 1 || increment > 5)
	{
		cout << "Increment must be within 1-5!" << endl << "Please try again" << endl << endl;
		cout << "Input increment of temperature from 1-5: "; cin >> increment;
	}

	cout << endl;
	
	cout << "Length \t\t\t Temperature" << endl;
	for (; To <= Tf; To += increment)
	{
		cout << Lo * (1 + a * (double) To) << " \t\t\t " << To << endl;
	}

	_getch();
	return 0;


}