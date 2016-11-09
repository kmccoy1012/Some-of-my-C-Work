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
const int INCHES_PER_CM = 0.393700787;
const int INCHES_PER_YD = 432; 

// main function
int main ()
{
	
	int cm;
	
	cout << "Enter centimeters.";
	cin  << cm;
	
	cout << "Total inches" << cm * inches_per_cm;
	
    return 0;
}
