/*
There are 9870 people in a town whose population increases by ten percent each year.
Write a loop that prints the annual population and determine how many years it will take for
the population to go over 30,000.

filename: population
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double population = 9870, year = 0;

	cout << "Initial population: " << population << endl;
	cout << "Population increases 10% each year." << endl << endl;

	for (; population <= 30000; population *= 1.10, year++)
	{
		cout << "Year " << year << ": Population = " << population << endl;
	}
	cout << "Year " << year << ": Population = " << population << endl;

	cout << endl;
	cout << "It will take " << year << " years for the population to go over 30000." << endl;

	_getch();
	return 0;
}