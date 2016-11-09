/******************************************
	Name:	Kevin McCoy
	Date:	January 24, 2011
	Class:  IST 163 9:00 AM
	Help:   Entire Class
 ******************************************/

#include <iostream>
using namespace std;



// constants
const int INCHES_PER_FOOT = 12;
const double CM_PER_INCH = 2.54;


// main function
int main ()
{
	
	// variable declaration area
	int feet, inches;		// inputs
	double cm;				// output
	
	
	// intro
	cout << "This program will take a person's height entered as feet and inches and " << endl
		 << "convert that height to cm." << endl
		 << "***********************************************************************" 
		 << endl << endl;
	
	// get the height of the person in feet and inches
	cout << "Please enter your height in feet and inches (both as whole numbers)";
	cin >> feet >> inches;
	
	
	
	// calculate the height as cm
	
	cm = (feet * INCHES_PER_FOOT + inches) * (CM_PER_INCH),
	
	cout << "The height of someone who is " << feet << " feet and " << inches
		 << " inches tall is " << cm << " cm."
	     << endl << endl;
	
	
	// exit main
    return 0;
}
