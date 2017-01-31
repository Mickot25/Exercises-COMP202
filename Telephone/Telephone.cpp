/*
The New Telephone Company has the following structure for long-distance calls:

- the regular rate for a call is P4 per minute.
- night call is discounted 50%.
	- any call longer than 60 minutes receives a 15% discount on its cost (after any other discount is subtracted).
- all calls are subject to a 12% EVAT on their final cost.

Write a program that reads the length of the call and time of the call
A -- day
B -- night
Then the program computes and displays the gross cost (before any discounts or tax)
and net cost (after discounts are deducted and tax is added).

Use switch

filename: telephone
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char time;
	double minutes, grosscost, netcost;

	cout << "This program will compute for the cost for long-distance calls" << endl;
	cout << "Brought to you by The New Telephone Company." << endl;

	cout << endl;

	cout << "'A' for a day call" << endl;
	cout << "'B' for a night call" << endl;

	cout << endl;

	cout << "Input the time of call based on the above choices: "; cin >> time;
	cout << "Input length of call in minutes: "; cin >> minutes;

	if (time == 'A' || time == 'a')
	{
		grosscost = 4 * minutes;
		netcost = grosscost + 0.12 * grosscost;
	}

	else if (time == 'B' || time == 'b')
	{
		if (minutes <= 60)
		{
			grosscost = (4 * minutes) - (0.50 * 4 * minutes);
			netcost = grosscost + 0.12 * grosscost;
		}

		else
		{
			grosscost = (4 * minutes) - (0.50 * 4 * minutes) - (0.15 * ((4 * minutes) - (0.50 * 4 * minutes)));
			netcost = grosscost + 0.12 * grosscost;
		}
	}

	else
	{
		grosscost = 0;
		netcost = 0;
	}

	cout << endl;

	if (time == 'A' || time == 'a' || time == 'B' || time == 'b')
	{
		if (minutes > 0)
		{
			cout << "Gross cost = P" << grosscost << endl;
			cout << "Net cost = P" << netcost << endl;
		}

		else
			cout << "Invalid input!. Please try again." << endl;
	}

	else
		cout << "Invalid input!. Please try again." << endl;

	_getch();
	return 0;
}