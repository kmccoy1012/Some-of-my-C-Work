

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

const double FED_TAX = .15, STATE_TAX = 0.035, SOCIAL_TAX = 0.0575,
MED_TAX = 0.0275, PENSION = 0.05, HEALTH = 75;

const int LARGESPACEDCOLUMN = 40;

int main()
{
	ofstream fout;
	
	fout.open("pay.rtf", ios::app);
	
	double grossAmount, federalTax, stateTax, ssTax, 
	medicareTax, pensionPlan, healthInsurance, netPay;
	
	string name;
	
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter your name: ";
	getline(cin, name);
	
	cout << "Enter your gross amount of pay: ";
	cin >> grossAmount;
	
	federalTax = grossAmount * FED_TAX;
	stateTax = grossAmount * STATE_TAX;
	ssTax = grossAmount * SOCIAL_TAX;
	medicareTax = grossAmount * MED_TAX;
	pensionPlan	= grossAmount * PENSION;
	healthInsurance = HEALTH;
	
	netPay = grossAmount - federalTax - stateTax - ssTax - medicareTax - pensionPlan
							- healthInsurance;
	
	
	fout << name << endl;
	fout << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Gross Amount: "
		 << setfill (' ') << right << "$" << setw(10) << grossAmount << endl
	     << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Federal Tax: "
		 << setfill (' ') << right << "$" << setw(10) << federalTax << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "State Tax: "
		 << setfill (' ') << right << "$" << setw(10) << stateTax << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Social Security Tax: "
		 << setfill (' ') << right << "$" << setw(10) << ssTax << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Medicare/Medicaid Tax: "
		 << setfill (' ') << right << "$" << setw(10) << medicareTax << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Pension Plan: "
		 << setfill (' ') << right << "$" << setw(10) << pensionPlan << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Health Insurance: "
		 << setfill (' ') << right << "$" << setw(10) << healthInsurance << endl
		 << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Net Pay: "
		 << setfill (' ') << right << "$" << setw(10) << netPay << endl << endl;
	
	cout << name << endl;
	cout << setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Gross Amount: "
	<< setfill (' ') << right << "$" << setw(10) << grossAmount << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Federal Tax: "
	<< setfill (' ') << right << "$" << setw(10) << federalTax << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "State Tax: "
	<< setfill (' ') << right << "$" << setw(10) << stateTax << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Social Security Tax: "
	<< setfill (' ') << right << "$" << setw(10) << ssTax << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Medicare/Medicaid Tax: "
	<< setfill (' ') << right << "$" << setw(10) << medicareTax << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Pension Plan: "
	<< setfill (' ') << right << "$" << setw(10) << pensionPlan << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Health Insurance: "
	<< setfill (' ') << right << "$" << setw(10) << healthInsurance << endl
	<< setfill ('.') << left << setw(LARGESPACEDCOLUMN) << "Net Pay: "
	<< setfill (' ') << right << "$" << setw(10) << netPay << endl << endl;
	
	fout.close();
	return 0;
}
