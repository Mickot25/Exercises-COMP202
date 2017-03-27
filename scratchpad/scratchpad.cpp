#include<iostream>
#include<conio.h>
using namespace std;

int main()

{

	double min, max, x;
	char ans;

	do {
		cout << "this program will compute and display the min and maximum value of input numbers" << endl;
		cout << "Please enter series of numbers (0 to stop): ";
		cin >> x;
		min = x;
		cin >> x;
		max = x;
		while (x != 0)
		{
			if (x>max)
			{
				max = x;
				//gawin mong max = x
			}
			if (x<max)
			{
				min = x;
				//gawin mong min = x
			}
			cin >> x;

		}
		cout << "max: " << max << endl;
		cout << "min: " << min << endl;
		cout << "Average is: " << (max + min) / 2.0 << endl;

		cout << "If you wish to continue, press Y....: ";
		cin >> ans;
	} while (ans == 'Y' && ans == 'y');

	_getch();
	return 0;
}