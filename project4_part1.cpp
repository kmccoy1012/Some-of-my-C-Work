#include <iostream>
#include <iomanip>

using namespace std;

// constants named
const int CONVERSION = 100;
const int LARGESPACEDCOLUMN = 40;

// main function
int main () {
	
	// variables named
	double population1, population2, rate1, rate2;
	
	// counter variable set to start at 0
	int	count = 0;
	
	
	
	// intro statement
	cout << "***************************************************************************" << endl;
	cout << "This program will take two cities' populations and their yearly growth rate." << endl;
	cout << "It will then calculate how many years it will take the first population to " << endl;
	cout << "be greater than the second population" << endl;
	cout << "***************************************************************************";
	cout << endl << endl;
	
	
    // user input information
	cout << "Enter the population of the first city: ";
	cin >> population1;
	
	cout << "Enter the first city's growth rate (4% is entered as 4): ";
	cin >> rate1;
	
	cout << "Enter the second population of the second city: ";
	cin >> population2;
	
	cout << "Enter the second city's growth rate (4% is entered as 4): ";
	cin >> rate2;
	cout << endl << endl;
	
	
	
	
	// if the population1 < population2
	if (population1 < population2) {
		
		// loops until population1 > population2
		while (population1 < population2) {
			((population1) = (population1) * (rate1 / CONVERSION) + population1);
			((population2) = (population2) * (rate2 / CONVERSION) + population2);
			count++;
		}
		
		// outputs the results
		cout << setprecision(0) << fixed << endl;
		cout << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Number of years: "
		     << setfill (' ') << right << setw(5) << count << endl;
		cout << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Population One: "
			 << setfill (' ') << right << setw(5) << population1 << endl;
		cout << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Population Two: "
			 << setfill (' ') << right << setw(5) << population2 << endl << endl;
	}
	
	// if the user inputs any populations or info that's not valid
	// outputs a message to the user
	else 
		cout << "You entered an invalid population" << endl;
	
	// exit main
    return 0;
}
