/**********************************************************************************
 Name: Kevin McCoy
 Date: January 26, 2011
 Purpose of File: Displays the miles a vehicle can get based on the amount of fuel
 Dates of Conding: January 23
 Help Received: Brian Morgan
 
 **********************************************************************************/

#include <iostream>
using namespace std;


// main function
int main ()
{

	
	// variable declared
	int cm;		//input
	
	int yards, feet, inches; // outputs
	
	int cm_to_in; //used as a conversion from centimeters to inches
	
	
	// intro statement that explains the program's purpose
	
	cout << "This program will prompt the user to input a measurement in centimeters," << endl
	     <<	"the program will then output the measurement  in yards feet inches." << endl
		 << "************************************************************************" << endl
		 << endl << endl;
	
	
	// asks the user to input a measurement in centimeters
	cout << "Enter a measurement in centimeters, measurement must be an integer: ";
	cin  >> cm;
	
	// centimeters are converted to inches
	cm_to_in = (cm) * 0.393700787;
	
	//converted to yards
	yards = (cm_to_in) / 36;
	
	//converted to feet
	feet = (cm_to_in % 36) / 12;
	
	//gives the remainder of inches
	inches = (cm_to_in % 12);

	// Displays the measurement in yards feet inches
	cout << "Total is " << yards << " yards " << feet << " ft " <<  inches << " in." << endl << endl;
	
	// exit main
    return 0;
}
