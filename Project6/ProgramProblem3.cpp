/*
TEAM DRAGON TOASTED HOTPOCKETS
Jacob Hemphill, Aidan Nico, Youssef Khalifa - 10/5/17 2nd
Assignment Name : Three digit ascend descend selection
To be able to have a 3 digit number into the "system" and calculate A, B, and C
Special thanks to Toaster = Bathbomb for help in coding the statements and for help in general.
-
Edited By Aidan Perry
Now repeats 30 times and looks better with new variable names.
*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	// Variables
	int i = 0;
	for (; i<= 30; i++)
	{
		/*Repeat for thirty times with the 'for' loop and what i believe to be short hand.*/
	int three_digit_number;


	cout << "enter a three digit number" << endl;
	cin >> three_digit_number;
	

	int x = three_digit_number;
	int Third_number = x % 10;
	int Second_number = (x / 10) % 10;
	int First_number = x / 100;
		if (First_number < Second_number && Second_number < Third_number) {
			cout << "Ascending . . . " << endl;
		}
		else if (First_number > Second_number && Second_number > Third_number) {
			cout << "Descending . . .  " << endl;
		}
		else {
			cout << "Neither . . . " << endl;
		}
	}
	pause(); // pauses to see the displayed text
}
