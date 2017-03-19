/*
Pagkuha muna ng average from first integer to last integer input from user.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int firstinteger, lastinteger, counter;
	double sum, average;
	cout << "Input the first number: "; cin >> firstinteger;
	cout << "Input the second number: "; cin >> lastinteger;

	for (sum = 0, counter = 0; firstinteger <= lastinteger; firstinteger++, counter++)
	{
		sum += firstinteger;
	}

	average = sum / counter;

	cout << "Average = " << average << endl;

	_getch();
	return 0;
}