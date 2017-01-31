/*
abc shipping company charges the ff. rates:

Weight of package --- rate per 500 km (or a fraction thereof)
5 kg or less --- P10.50
Over 5 kg but not more than 10 kg --- P15.75
Over 10 kg but not more than 20 kg --- P20.65

Write a program that asks the user for the weight of the package and the distance (in km) it is to be shipped.
The charge is on the weight of the package times the corresponding rate times the shipping distance
(500 km or less = 1 shipping distance)
The total charge is the charge plus 10% evat.
The program then displays the charge and the total charge.

Filename: weight
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double weight, distance, charge, totalcharge;

	cout << "This program will calculate cost for package transportation." << endl;
	cout << "Brought to you by abc shipping company." << endl;

	cout << endl;

	cout << "Input weight of package in kg: "; cin >> weight;
	cout << "Input distance to travel: "; cin >> distance;

	if (weight >= 0 && weight <= 5)
	{
		if (distance <= 500)
		{
			charge = weight * 10.50;
			totalcharge = charge + 0.10 * charge;
		}

		else
		{
			charge = weight * 10.50 * (distance / 500);
			totalcharge = charge + 0.10 * charge;
		}
	}

	else if (weight > 5 && weight <= 10)
	{
		if (distance <= 500)
		{
			charge = weight * 15.75;
			totalcharge = charge + 0.10 * charge;
		}

		else
		{
			charge = weight * 15.75 * (distance / 500);
			totalcharge = charge + 0.10 * charge;
		}
	}

	else if (weight > 10 && weight <= 20)
	{
		if (distance <= 500)
		{
			charge = weight * 20.65;
			totalcharge = charge + 0.10 * charge;
		}

		else
		{
			charge = weight * 20.65 * (distance / 500);
			totalcharge = charge + 0.10 * charge;
		}
	}

	cout << endl;

	if (weight > 0 && distance > 0)
	{
		cout << "Charge = P" << charge << endl;
		cout << "Total Charge = P" << totalcharge << endl;
	}

	else
		cout << "Invalid inputs! Please try again." << endl;

	_getch();
	return 0;
}