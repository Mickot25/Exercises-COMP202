/*
Write a program that reads an integer in a sentinel-controlled loop until the user terminates the program by entering 0.
The program computes and outputs all the integers divisible by 4 between or equal from 1 to n.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int integer, n;

	cout << "Input last integer, press 0 to stop: "; cin >> n;
	
	if (n == 0)
		return 0;

	while (n != 0)
	{
		cout << "Integers divisible by 4 from 1 to " << n << ": ";
		for (integer = 1; integer <= n; integer++)
		{
			if (integer % 4 == 0 && integer != n)
				cout << integer << " ";
		}
		cout << endl << endl;
		cout << "Input last integer, press 0 to stop: "; cin >> n;
	}
	
	return 0;
}