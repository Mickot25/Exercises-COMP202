/*
Write a program that will output all the common factors of 2 numbers inputted by the user.

filename: factors
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, counter;
	char choice;

	cout << "This program will output all the common factors of 2 numbers" << endl << "inputted by the user." << endl;

	do
	{
		cout << endl;

		cout << "Input the first number: "; cin >> a;
		cout << "Input the second number: "; cin >> b;

		cout << endl;

		cout << "The common factors are: " << endl;

		counter = 1;
		while (counter <= a)
		{
			if (a%counter == 0 && b%counter == 0)
			{
				cout << counter << ". ";
			}
			counter++;
		}

		cout << endl << endl;
		cout << "Do you want to repeat the program? (Y/N)"; cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	_getch();
	return 0;
}