/*******************************************
	Name:				Brian M. Morgan
	Class:				IST163, 11:00
	Dates of Coding:	January 24, 2011
	Help Received:		Entire Class
********************************************/
#include<iostream>
using namespace std;

// constants
const int SEC_PER_MINUTE = 60;
const int SEC_PER_HOUR = 3600;
const int MIN_PER_HOUR = 60;

// Main Function
int main()
{
	// variable declaration
	int total_seconds;				//input
	int hours, minutes, seconds;	//output

	// intro
	cout << "This program asks the user for the total time in elapsed seconds" << endl
		<< "and output the equivalent in hours, minutes, and seconds." << endl
		<< "-------------------------------------------------------------------"
		<< endl << endl;

	// get the total elapsed seconds from the user
	cout << "Enter the total elapsed time in seconds: ";
	cin >> total_seconds;
	cout << "Enter the total time in minutes; ";
	cin >> total_minutes;

	// calculate hours, minutes, and seconds
	hours = total_seconds / SEC_PER_HOUR;
	minutes = total_seconds % SEC_PER_HOUR / MIN_PER_HOUR;
	seconds = total_seconds % SEC_PER_MINUTE;

	// output the answer
	cout << "Total Elapsed time is "<< hours << ":" << minutes << ":" << seconds << endl << endl;

	// exit main
	return 0;
}