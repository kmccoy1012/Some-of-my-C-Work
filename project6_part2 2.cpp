// libraries named
#include<iostream>
#include<iomanip>

using namespace std;

// function prototypes
void info();
void initialize (int& age, int& months, int& trainingSessions, double& cost);
void memberCost (int age, int months, int trainingSessions, double& cost);

// main function
int main()
{
    // variables to take in the user's inputs
	int choice, age, months, pt;
	double cost;
	
	// runs the info function to output the gym's information
	info();
	
	// do while loop for the menu
	do
	{
		cout << "This menu will help you to determine " << endl
		<< "your membership cost." << endl
		<< "You will enter your age, " << endl
		<< "the amount of months you want to pay for, " << endl
		<< "and any personal training sessions you may want." << endl
		<< "Choose an option below." << endl
		<< "1.  Your Age" << endl
		<< "2.  Membership Length" << endl
		<< "3.  Personal training" << endl
		<< "4.  Calculate your membership cost" << endl
		<< "5.  Exit" << endl;
		cin >> choice;
		
		// if statement for the  users's age
		if (choice == 1)
		{
			// prompts the user for their age
			cout << "Please enter your age" << endl;
			cin >> age;
		}
		
		// if statement if the menu choice is 2
		else if (choice == 2)
		{
			// prompts the user to enter the # of months they want to pay for
			cout << "How many months are you paying for?" << endl;
			cin >> months;
		}
		
		// if statement if the user's choice is 3
		else if (choice == 3)
		{
			// prompts the user for the number of training sessions they want
			cout << "Number of Personal Training Sessions?" << endl;
			cin >> pt;
		}
		
		// calculates the amount the user owes
		else if ( choice == 4)
		{
			memberCost(age, months, pt, cost);
			cout << endl << endl;
			cout << "Your fee due today is: $" << cost << endl << endl << endl << endl;
		
		}
			
	}
	while (choice != 5); // the user will enter 5 to exit the menu
		
	
	return 0;// exit main
}


/* 1. Function Name: info
   2. Preconditions: none
   3. Postconditions: will output the info about the gym to the user
 */

void info ()
{
	// outputs the gym info to the user
	cout << "********Welcome to Kevin's Fitness********" << endl << endl;
	cout << "Monthly membership cost: $20" << endl;
	cout << "Senior Citizens receive a 30% discount" << endl;
	cout << "(Senior citizens are 62 or older)" << endl << endl;
	cout << "If 12 or more months are paid for in" << endl;
	cout << "advance, the discount is 15%" << endl << endl;
	cout << "Personal Training Sessions: $10" << endl << endl;
	cout << "If more than 5 sessions are" << endl;
	cout << "purchased, the discount is 20%" << endl;
	cout << "per session" << endl;
	cout << "******************************************" << endl;
	cout << endl << endl;
}


/* 1. Function Name: initialize
   2. Preconditions: takes in 4 parameters
   3. Postconditions: sets all the parameters to 0
 */

void initialize (int& age, int& months, int& trainingSessions, double& cost)
{
	age = 0;
	months = 0;
	trainingSessions = 0;
	cost = 0;
}

/* 1. Function Name: memberCost
   2. Preconditions: takes in 4 parameters
   3. Postconditions: uses if statements to determine the discount and the total cost
 */

void memberCost (int age, int months, int trainingSessions, double& cost)
{
	// constants used ONLY in this function
	// so that numbers didn't get confusing
	const int SENIOR = 62;
	const double FIFTEEN = .15;
	const double TWENTY = .20;
	const double THIRTY = .30;
	const int MONTH = 12;
	const int FIVE = 5;
	
	// variables for the calculations
	double percentOff = 0;
	double monthlyRate = 20;
	double physical = 10;
	double training;
	double temp;
	
	
	// if statement for if the age is >= 62
	// the percentage gets .30 added to it
	if (age >= SENIOR) 
	{
		percentOff+= THIRTY;
	}
	
	// if months are >= 12
	// the percentage adds .15 to it
	if (months >= MONTH)
	{
	percentOff+= FIFTEEN;
}
	
	// if there are 5 or less training sessions
	// calculations are done here
	if (trainingSessions <= FIVE) {
		training = (trainingSessions * physical); 
	}
	
	// if statement for if there's more than 5 training sessions
	if (trainingSessions > FIVE)
{
	training = (trainingSessions * physical) - ((trainingSessions * physical)  * TWENTY);
}	
	
	// temp calculates the discounts
	// cost is the final output
	temp = (monthlyRate * months) - ((monthlyRate * months) * percentOff);
	cost = temp + training;
}
