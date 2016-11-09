#include <iostream>
#include <iomanip>

using namespace std;


// constants declared
const double YEAR_CONVERSION = 12;
const double PERCENT_CONVERSION = 100;
const int LARGESPACEDCOLUMN = 20;


// main function
int main () {
    
	//variables declared
	double loan, interest, payment, monthly, monthly_one;
	double months = 1;
	
	
	//intro statement
	cout << "***************************************************************************" << endl;
	cout << "This program will calculate the number of months it takes to repay a loan." << endl;
	cout << "The program will ask the user for the loan amount, interest rate, and the " << endl;
	cout << "minimum payment to be made each month" << endl;
	cout << "***************************************************************************";
	cout << endl << endl;
	
	
	// asks the user to input their information
	cout << "Enter the loan amount:$ ";
	cin >> loan;
	cout << "Enter the interest (4% is entered as 4): ";
	cin >> interest;
	cout << "Enter the monthly payments:$ ";
	cin >> payment;
	cout << endl;
	
	
	// if statement, if the payment is less than the loan
	// and greater than the monthly interest, calculations
	// are performed
	if ((payment < loan) && (payment >= ((loan * ((interest / YEAR_CONVERSION) / PERCENT_CONVERSION))))) 
	{
		// loops until the payment is greater than the loan amount
		while (payment < loan) {
			
			(monthly = (loan * ((interest / YEAR_CONVERSION) / PERCENT_CONVERSION)));
			
			(monthly_one = (payment - monthly));
			
			(loan = (loan - monthly_one));
			
			months++;
			
		}
		
		// outputs the number of months it will take to repay the loan
		// based on the input entered by the user
		cout << setprecision(0) << fixed << endl
		<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Loan length: "
		<< setfill (' ') << right << setw(2) << months << " months"<< endl;
	}
	
	// if the payment is less than the monthly interest amount
	// a message is output to the user
	else {
		cout << "Your payment is too low! The loan amount will increase if you monthly payment doesn't increase!";
	}

	// exit main function
    return 0;
}
