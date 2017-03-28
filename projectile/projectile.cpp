/*
The x and y coordinates as a function of time, t, of a projectile fired
with an initial velocity v, at an angle of theta, angle, with respect to the ground
are given by these formulas:

x = vt cos (angle)
y = vt sin (angle)

Using this formula, write a C++ program that displays a table of x and y values for a projectile fired
with an initial velocity v (ft/sec) at an angle.

The table should contain values corresponding to the time interval 0 to 5 seconds in increment of 0.5 second.

- input validation: v>0, angle is from 0 to 90 degrees
- your program should execute for as long as the user wants to continue
- round-off results to 2 decimal places

filename: projectile
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#define pi 3.14159
using namespace std;

int main()
{
	double v, angle, time;

	cout << "This program will display a table of x and y values for a projectile fired." << endl << endl;

	cout << "Input initial velocity of projectile: "; cin >> v;

	while (v <= 0)
	{
		cout << "Invalid initial velocity! It must be greater than 0." << endl << "Please try again." << endl << endl;
		cout << "Input initial velocity of projectile: "; cin >> v;
	}

	cout << "Input angle of projection: "; cin >> angle;

	while (angle < 0 || angle > 90)
	{
		cout << "Invalid angle! It must be between 0 - 90." << endl << "Please try again." << endl << endl;
		cout << "Input initial velocity of projectile: "; cin >> angle;
	}

	cout << endl;

	cout << setw(20) << left << "Time" << setw(20) << "X velocity" << "Y Velocity" << endl;

	for (time = 0; time <= 5; time += 0.5)
	{
		cout << setw(20) << left << time << setw(20) << v * time * cos(angle*pi / 180) << v * time * sin(angle*pi / 180) << endl;
	}

	_getch();
	return 0;
}