/**************************************************************************************************
 Name: Kevin McCoy

 Purpose of File: User enters an integer, if it's > 10, the integer is expressed as a letter value
 
 **************************************************************************************************/

#include <iostream>
using namespace std;

// constant declared
const int ALPHABET = 10;

// main function
int main () 

{
	// variable delcared
	int number;
	
	// intro
	cout << "This program will prompt the user for an integer between 0 and 35." << endl
		 << "If it is < 10, the integer is displayed, >= 10, the corresponding letter is output." << endl
	     << endl;
	
	// prompts the user to enter an integer
	cout << "Enter an integer between 0 and 35: ";
	cin >> number;
	
		// if the # is < 10, the # is output
		if (number < 10) 
			cout << "Your number is " << number;
		// if the # is >= 10, a letter value is output
		else if (number >= 10)
			// static cast subtracts 10 from the number to start it
			// at 0 and starts at 'A' library
			cout << "The number " << number << " is equal to value "
			<< static_cast<char> ( number - ALPHABET + 'A' );
	
	// exit main
	return 0;
}
