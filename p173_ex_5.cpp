#include<iostream>
#include<fstream>	// library for file io
#include<iomanip>
using namespace std

int main()
{

	// file input variable
	ifstrea fin;
	// file output variable
	ofstream fout;

	int boxPrice, sidelinePrice, premiumPrice, generalPrice,
		ticketPrice, numberOfTicketsSold;

