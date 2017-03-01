/*
Write a program that prompts the user to input an integer and then
outputs both the individual digits of the number and the sum of the digits.

For example:
It should output the individual digits of 3456 as 3 4 5 6.
Output the individual digits of 8030 as 8 0 3 0.
Output the individual digits of 2345526 as 2 3 4 5 5 2 6.
Output the individual digits of 4000 as 4 0 0 0.
Output the individual digits of -2345 as 2 3 4 5.

filename: no1p328
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int counter, input, inputcounter, inputdisplay, sum;
	char choice;

	cout << "This program will display individual digits and the " << endl << "sum of those digits given by the user." << endl;

	do
	{
		cout << endl;

		cout << "Input a whole number: "; cin >> input;

		input = abs(input); //Para gumana mga negative number na inputs.

		inputcounter = input; //Kinopya natin value ng input natin para di maapektuhan yung value ng input natin kasi ididivide natin yun sa 10 para mabilang ilang digits... Gagamitin ulit kasi mamaya yung original value ng input.

		counter = -1;
		while (inputcounter > 0)
		{
			inputcounter = inputcounter / 10; // Pakonti ng pakonti...
			counter++; //Ito yung part para mabilang ilang digits meron yung number. example 54321 bilang dito 5 digits pero bawasan ng isa dahil explained sa baba...
		}

		sum = 0;

		cout << endl;

		cout << "Display: ";

		while (counter >= 0)
		{
			inputdisplay = input / pow(10, counter); // para makuha yung pinakadulo na digit 54321 / 10^4 = 5.4321 or 5. Ito reason bakit kailangan bawasan ng isa yung counter para may matirang whole number which is 5.
			inputdisplay = inputdisplay % 10; //bale para makuha yung remainder 5 / 10 = 0.5. 5 yung remainder niya. pag ano naman naging 54.321 / 10 = 5.4, yung remainder niya magiging 4...

			sum += inputdisplay; // add mo yung nakuha mong digit.

			counter--; //pakonti ng konti yung counter hanggang mag equal sa 0. Bale exponent niya magiging 0 na edi 54321 na yung value natin. iDivide mo siya sa 10 makukuha mong remainder ay 1.

			cout << inputdisplay << " "; //Display the digit.
		}

		cout << endl;
		cout << "The sum of all the digits: " << sum << endl << endl; // Display the sum.

		cout << "Repeat the program? (Y/N): "; cin >> choice; 

	} while (choice == 'Y' || choice == 'y');

	return 0;
}