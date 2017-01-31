/*
Write a program that will calculate and print bills for the city power company based on the table below

User Code --- Computation of Rates
R --- P 175.50 plus 3.50/kwh used
C --- P 1550.75 for the first 1000 kwh used and P 5.75 for each additional kwh
I --- P 875.45 per 500 kwh (or less) used

The program should prompt the user to enter the user code and the consumption in kwh (kilo-watt hours).
Your program should print the total bill.

Filename: electricbill
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char usercode;
	double consumption, totalbill;

	cout << "This program will calculate and print bills for the city power company." << endl;
	
	cout << endl;

	cout << "'R' for Residential" << endl;
	cout << "'C' for Commercial" << endl;
	cout << "'I' for Industrial" << endl;

	cout << endl;

	cout << "Input the type of building based on the list above: "; cin >> usercode;
	cout << "Input the amount of electricity consumed in kwh: "; cin >> consumption;

	if (usercode == 'R' || usercode == 'r')
		totalbill = 175.50 + (3.50 * consumption);

	else if (usercode == 'C' || usercode == 'c')
	{
		if (consumption <= 1000)
			totalbill = 1550.75;

		else
			totalbill = 1550.75 + 5.75 * (consumption - 1000);
	}

	else if (usercode == 'I' || usercode == 'i')
	{
		if (consumption <= 500)
			totalbill = 875.45;

		else
			totalbill = 875.45 * (consumption / 500);
	}

	else
		totalbill = 0;

	cout << endl;

	if (consumption >= 0)
	{
		if (usercode == 'R' || usercode == 'r' || usercode == 'C' || usercode == 'c' || usercode == 'I' || usercode == 'i')
			cout << "Your total bill is: P" << totalbill << endl;

		else
			cout << "Invalid inputs! Please try again." << endl;
	}

	else
		cout << "Invalid inputs! Please try again." << endl;

	_getch();
	return 0;
}