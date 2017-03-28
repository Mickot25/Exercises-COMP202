/*
There are 9870 people in a town whose population increases by ten percent each year.
Write a loop that prints the annual population and determine how many years it will take for
the population to go over 30,000.
filename: population
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	double pop, ctr, annual;

	cout << "This program will calculate the annual population of the town and";
	cout << "how many years it will take for the population to go over 30,000" << endl << endl;
	cout << "year" << "\t\t" << "Annual Population" << endl;

	pop = 9870;
	annual = pop;
	ctr = 1;
	while (annual <= 30, 000)
	{
		annual + (annual*0.1);
		cout << ctr << "\t\t" << annual;
		ctr++;
	}

	_getch();
	return 0;

}