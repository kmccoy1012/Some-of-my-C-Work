#include<iostream>
#include"clockType.h"
using namespace std;

void changeSeconds(clockType& clock, int secs);

int main()
{
	clockType myClock;		// creates an object of clockType, initial
							// values of 0, 0, 0
	clockType otherClock(9, 25, 13);	// sets clock to 9:25:13

	// print out each clock
	
	cout << "My Clock: ";
	myClock.printTime();
	cout << endl << endl;
	cout << "Other Clock: ";
	otherClock.printTime();
	cout << endl << endl;
	cout << "the time is now ";
	otherClock.printTime();
	cout << " which means party time.";

	// increment my clock by 1200 seconds
	changeSeconds(myClock, 1200);

	// show the results
	cout << "---------------------------" << endl;
	myClock.printTime();

	myClock.setTime(10, 10, 10);
	otherClock.setTime(10, 10, 10); 
	// does otherClock==myClock?
	if (myClock.equalTime(otherClock))
		cout  << "TIMES ARE EQUAL";
	else
		cout << "NOPE.  Not the same.";

	return 0;
}

void changeSeconds(clockType& clock, int secs)
{
	for (int i=0; i<secs; i++)
		clock.incrementSeconds();
}