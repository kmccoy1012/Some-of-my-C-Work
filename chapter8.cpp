#include<iostream>
#include "namespaces.h"

using namespace std;
using namespace OH;

int main()
{
	enum colors { RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET };
	enum grades { A, B, C, D, F, W, I };

	int mynumber;
	integer yournumber;

	//double taxRate = 99;

	colors favoriteColor;
	grades MyGrade;

	MyGrade = A;
	favoriteColor = GREEN;
	
	setPrecision(2);

	cout << 1234.12341241234123 << endl;

	if (favoriteColor == GREEN)
		cout << "My favorite color is Purple, not " 
		     << favoriteColor << "!";

	for (grades i=A; i<=I; i=static_cast<grades>(i+1))
		cout << static_cast<grades>(i) << endl;

	cout << "State Tax Rate is " << taxRate << " and an item"
		 << " that costs $10.00 w/tax is: " << calculatePrice(10)
		 << endl;
	return 0;
}
