/*
A golf ball is dropped from an airplane.
The distance, d, the ball falls in t seconds given by the formula

d = (1/2)gt^2

where:
g = 9.8 m/s^2 or 32 ft/s^2

Using this information, write a C++ program that displays the distance fallen in each 1-sec interval for t seconds
and the total distance the golf ball falls at the end of each interval.

The output should complete the following chart:

Time(sec)	Total distance (ft)	Total distance (m)
0		0.00			0.00
1		16.00			4.99
...		...			...
t		...			...

- input validation: t>0
- your program should execute for as long as the user wants to continue
- round-off results to 2 decimal places.

filename: dist_physics
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double distanceft, distancem;
	int time;
	char choice;

	cout << "This program will compute for the distance travelled of a ball in free fall." << endl << endl;

	do
	{
		cout << "Input time elapsed the ball is in free fall: "; cin >> time;

		while (time <= 0)
		{
			cout << "Time elapsed should be greater than 0! Please try again." << endl << endl;

			cout << "Input time elapsed the ball is in free fall: "; cin >> time;
		}

		cout << endl;

		cout << left << setw(20) << "Time(sec)" << setw(30) << "Total distance (ft)" << setw(20) << "Total distance (m)" << endl;
		for (int timer = 0; timer <= time; timer++)
		{
			distanceft = 0.5 * 32.0 * pow(timer, 2.0);
			distancem = 0.5 * 9.8 * pow(timer, 2.0);

			cout << fixed << setprecision(2) << left << setw(20) << timer << setw(30) << distanceft << distancem << endl;
		}

		cout << endl;

		cout << "Do you want to repeat the program? (Y/N): "; cin >> choice;

		cout << endl;
	} while (choice == 'Y' || choice == 'y');


	_getch();
	return 0;
}