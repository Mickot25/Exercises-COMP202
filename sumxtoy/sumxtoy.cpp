/*
Write a program to compute the sum of all integers both divisible by 3 and 4
from x to y where x and y are user inputs.
Your code prompts the user to enter new values for x and y if x>y.

filename: sumxtoy
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, sum;
	char choice;

	cout << "This program will compute for the sum of all integers both" << endl;
	cout << "divisible by 3 and 4, between two values inputted by the user." << endl << endl;

	do {
		cout << endl;
		cout << "Input the first value: "; cin >> x;
		cout << "Input the second value: "; cin >> y;

		cout << endl;

		if (x > y)
		{
			cout << "Invalid input! Your second value must be greater than your first value!" << endl;
			cout << "Please try again." << endl;

			_getch();
			return 0;
		}

		else
			cout << "All the numbers between " << x << " and " << y << " that are divisible by 3 and 4: " << endl;

		for (sum = 0; x <= y; x++)
		{
			if (x % 3 == 0 && x % 4 == 0)
			{
				cout << x << ". ";

				sum += x;
			}
		}

		cout << endl << endl << "The sum of all these integers is: " << sum << endl << endl;

		cout << "Do you want to repeat the program? (Y/N): "; cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return 0;
}