/*******************************************
 Name:				Kevin McCoy
 Use:               This calculator is used in order to calculate if a Speedway GM is executing the metrics or not
 ********************************************/
#include<iostream>
#include<iomanip>

using namespace std;

// constants
const double red_kpi = 1;
const double yellow_kpi = 2.35;
const double green_kpi = 3.69;

// Main Function
int main(int argc, char**argv)
{
	// variable declaration
	double total_months;				//input
	double red, yellow, green;	//output
	double total_kpi;
	double total_red, total_yellow, total_green;
	
	std::cout << std::setprecision(2) << std::fixed;
	
	// intro
	cout << "This program is used to calculate the SM assessment based on" << endl
	<< "KPIs and the number of months.....By Kevin McCoy, DM 242" << endl
	<< "-------------------------------------------------------------------"
	<< endl << endl;
	
	// get the total elapsed seconds from the user
	cout << "Enter the total number of months (1, 2, or 3): ";
	cin >> total_months;
	cout << "Enter the total number of red KPIs: ";
	cin >> red;
	cout << "Enter the number of yellow KPIs: " ;
	cin >> yellow;
	cout << "Enter the number of green KPIs: ";
	cin >> green;
	
	
	// calculate hours, minutes, and seconds
	
	total_red = ((red * 1));
	total_yellow = ((yellow * 2.35));
	total_green = ((green * 3.69));
	
	
	total_kpi = ((total_red + total_yellow + total_green) / total_months) ;
	
	
	// output the answer
	cout << "Total KPI score is:" << total_kpi << endl << endl;
	
	// exit main
	return 0;
}
