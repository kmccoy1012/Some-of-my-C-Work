// headers
#include <iostream>
#include <iomanip>

using namespace std;

// global constants for rates

const double R_BILL_PROCESS = 4.50;
const double R_BASIC_SERVICE = 20.50;
const double R_PREMIUM_CH = 7.50;
const double B_BILL_PROCESS = 15.00;
const double B_PREMIUM_CH = 50.00;
const double B_BASIC_SERVICE = 75.00;
const double B_ADD_FEE = 5.00;
const int B_NUM_CONNECTIONS = 10;


// main function
int main ()
{
	double total_bill;
	int connections, premium_channels;
	char account_type;
	int account_number;
	
	cout << "Welcome to the Cable Billing Program" << endl << endl;
	
	cout << "Enter the customer's account number: ";
	cin >> account_number;
	
	// get # of connections, but only if business customer
	if (account_type == 'B')
	{
	cout << "How many cable connections do you have?: ";
	cin >> connections;
	}
	
	// get # of premium channels
	cout << "How many premium channels do you subscribe to?: ";
	cin >> premium_channels;
	
	// bil calculations
	if (account_type == 'R')
	{
		// calculate the residential bill
		total_bill = R_BILL_PROCESS + R_BASIC_SERVICE 
		            + premium_channels + R_PREMIUM_CH;
	}
	else if (account_type == 'B')
	{
		// calculate the business bill
		total_bill = B_BILL_PROCESS + B_BASIC_SERVICE 
		+ premium_channels + B_PREMIUM_CH;
		if (connections > B_NUM_CONNECTIONS)
			total_bill += (connections - B_NUM_CONNECTIONS) * B_ADD_FEE;
	}
	else
	{
		// exit gracefully
		cout << "Invalid bill type.";
		return 1;
	}
	
	cout << "Total Due for the Month"
		 << "Customer: " << account_type << account_number << endl 
	<< "Total: $" << total_bill;
	
	
    return 0;
}
