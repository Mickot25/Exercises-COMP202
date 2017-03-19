/*
A golf ball is dropped from an airplane.
The distance, d, the ball falls in t seconds given by the formula

d = (1/2)gt^2

where:
g = 9.8 m/s^2 or 32 ft/s^2

Using this information, write a C++ program that displays the distance fallen in each 1-sec interval for t seconds
and the total distance the golf ball falls at the end of each interval.

The output should complete the following chart:

Time(sec)	---		Total distance (ft)		---		Total distance (m)
0					0.00							0.00
1					16.00							4.99
...					...								...
t					...								...

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