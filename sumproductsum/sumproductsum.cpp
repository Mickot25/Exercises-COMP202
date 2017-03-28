/*
Write a program that prompts the user to enter a whole number
then get the sum of the odd digits,
the product of the even digits,
and the sum of all the numbers.

Input validation: num > 10000

Sample output:
Input number: 12345
Sum of odd numbers: 9
Product of even numbers: 8
Sum of all numbers: 15

Must continue as long as user wants to repeat the program.
*/

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	int input, inputcopy, inputdisplay, counter, sumodd = 0, producteven = 1, sumall = 0;
	char choice;

	do
	{
		cout << "Input number greater than 10000: "; cin >> input;
		while (input <= 10000)
		{
			cout << "Input must be greater than 10000!"<<endl<<"Please try again." << endl << endl;

			cout << "Input number greater than 10000; "; cin >> input;
		}

		inputcopy = input;

		counter = -1;
		while (inputcopy > 0)
		{
			inputcopy /= 10;
			counter++;
		}

		cout << endl;
		cout << "Output: ";

		while (counter >= 0)
		{
			inputdisplay = input / pow(10.0, counter);
			inputdisplay = inputdisplay % 10;
			counter--;

			cout << inputdisplay << " ";

			sumall += inputdisplay;

			if (inputdisplay % 2 != 0)
				sumodd += inputdisplay;

			else
				producteven *= inputdisplay;
		}
		cout << endl;
		cout << "Sum of odd numbers: " << sumodd << endl;
		cout << "Product of even numbers: " << producteven << endl;
		cout << "Sum of all numbers: " << sumall << endl << endl;

		cout << "Do you want to repeat the program? Input Y:"; cin >> choice;

		cout << endl;
	} while (choice == 'Y' || choice == 'y');
	
	_getch();
	return 0;
}