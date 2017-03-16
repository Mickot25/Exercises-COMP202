//Countdown from 10

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int countdown = 10;

	while (countdown > 0)
	{
		cout << countdown << ", ";

		countdown--;
	}
	cout << "Liftoff!" << endl;

	_getch();
	return 0;
}