/******************************************************************
 Name:		Kevin McCoy
 Project:	Project 5 part 1
 Purpose:	based on 2 points of a circle, the program will 
			output the distance, radius, circumference, and area
 Date:		3/5/2011
 Help:		Ryan Fyffe
 ******************************************************************/


#include <iostream> // io library
#include <cmath> //math library
#include <iomanip>

using namespace std;

// constants declared, TWO is used for squares
const double PI = 3.1416;
const double TWO = 2;

//function prototypes
double distance (double xOne, double yOne, double xTwo, double yTwo);
double radius (double xOne, double yOne, double xTwo, double yTwo);
double circum (double radius);
double area (double radius);

// main function
int main () {
	
	// variables delcared
	double xOne, yOne, xTwo, yTwo, radiusvar;
	
	// intro statement to the user
	cout << "*****************************************************"<< endl;
	cout << "This program will prompt the user to input two point;" << endl;
	cout << "the center point of a circle and a random point" << endl;
	cout << "The program will then calculate the distance, area, " << endl;
	cout << "circumference, and diameter of the circle." << endl;
	cout << "*****************************************************"<< endl << endl;
	
	// has the user input the points of a circle and the center of a circle
	cout << "Enter the center point of a circle ((2,4) is entered 2 4); ";
	cin >> xOne >> yOne;
	cout << "Enter a point on the circle; ";
	cin >> xTwo >> yTwo;
	
	// radius variable for circumference and area
	radiusvar = distance(xOne, yOne, xTwo, yTwo);
	
	// outputs the functions and diameter
	cout << fixed << showpoint << setprecision(2);
	cout << endl;
	cout << setw(25) << left << "Distance:  " <<
	distance (xOne, yOne, xTwo, yTwo) << endl;
	cout << setw(25) << left << "Radius:  " <<
	radius(xOne, yOne, xTwo, yTwo) << endl;
	cout << setw(25) << left << "Diameter: " <<
	TWO * radius(xOne, yOne, xTwo, yTwo);
	cout << endl;
	cout << setw(24) << left << "Circumference: " <<
	circum(radiusvar) << endl;
	cout << setw(24) << left << "Area: " <<
	area(radiusvar) << endl;

	
	
    return 0; // exit main
	
}

// distance function
double distance(double x1, double y1, double x2, double y2)

{
double line;
	line = sqrt(pow(x2 - x1, TWO) + pow(y2 - y1, TWO));
	
	return line; //returns the line value
}


// radius function
double radius (double x1, double y1, double x2, double y2)

{
	double rad;
	rad = distance(x1, y1, x2, y2);
	return rad; // returns the rad value
}


// circumference function

double circum (double radius)


{
double circ;

	circ = radius * TWO * PI;
	
return circ; // returns the circ value
}

// area function
double area (double radius)

{
	double area;
	
	area = PI * pow(radius, TWO);
	
	return area; // returns the area value
}