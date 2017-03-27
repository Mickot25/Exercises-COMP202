/*
From a series of numbers inputted by the user, display the minimum, maximum and average of the mininum and maximum of the series of numbers.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double number, max, min;
	char choice;

	do
	{
		cout << "Input a series of numbers, press 0 to stop: "; cin >> number;
		max = number;
		min = number;

		if (number != 0)
		{
			while (number != 0)
			{
				if (number >= max)
					max = number;

				if (number <= min)
					min = number;
				cout << "Input a series of numbers, press 0 to stop: "; cin >> number;
			}

			cout << endl;

			cout << "Max: " << max << endl;
			cout << "Min: " << min << endl;
			cout << "Ave: " << (max + min) / 2.0 << endl << endl;

			cout << "Do you want to repeat the program? Press Y: "; cin >> choice;
			cout << endl;
		}

		else
			return 0;

	} while (choice == 'Y' || choice == 'y');
	_getch();
	return 0;
}
