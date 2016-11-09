/****************************************************************
 Name: Kevin McCoy
 Date: February 13 2011
 Purpose: Updates a user's bank account information based on their
          balance, minimum balance, and interest
 ****************************************************************/

// libraries
#include <iostream>
#include <iomanip>

using namespace std;

// constants named
const double SAVINGS_INTEREST = 0.04;
const double CHECKING_INTEREST1 = 0.03;
const double CHECKING_INTEREST2 = 0.05;
const double SAVINGS_FEE = 10.00;
const double CHECKING_FEE = 25.00;

// main function
int main ()
{
	// variables named
	int account_Number;
	char account_type;
	double balance;
	double min_Balance;

	// asks the user to input their information
	cout << "Enter your account number: ";
	cin  >> account_Number;
	
	cout << "Enter your account type (S for savings, C for checking: ";
	cin  >> account_type;
	
	cout << "Enter your minimum balance: ";
	cin  >> min_Balance;
	
	cout << "Enter your current balance: ";
	cin  >> balance;
	
	
	// if the account is a savings account
	// and has a balance < their minimum balance
	if (account_type == 'S' && balance < min_Balance)
		balance = balance - SAVINGS_FEE;
	
	// if the account is a savings account
	// and has a balance > minimum balance
	else if (account_type == 'S' && balance > min_Balance) 
		balance = (balance * SAVINGS_INTEREST) + balance;
			 
	// if the account is a checking account
	// with a balance < minimum balance
	else if (account_type == 'C' && balance < min_Balance) 
		balance = (balance - CHECKING_FEE);
			
	// if the account is a checking account
	// with a balance at least >= their balance + 5000
	else if (account_type == 'C' && balance >= min_Balance + 5000) 
		balance = (balance * CHECKING_INTEREST1) + balance;
	
	// if the account is a checking account
	// with a balance > minimum balance but < minimum balance + 5000
	else 
		balance = (balance * CHECKING_INTEREST2) + balance;
	
	
	
	// outputs the information input as well as
	// the new balance by adding the interest or subtracting an over draft fee
	cout << setprecision(2) << showpoint << fixed << endl;
	cout << "Account Number: " << account_Number << endl;
	cout << "Account Type: "   << account_type << endl;
	cout << "Minimum balance: $" << min_Balance << endl;
	cout << "Your current balance: $" << balance;
	
	// end main function
    return 0;
}
