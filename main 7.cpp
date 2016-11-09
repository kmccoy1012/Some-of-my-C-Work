#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct menuItemType
{
	string menuItem;
	double menuPrice;
};

void getData(menuItemType menuList[8]);
void showMenu(menuItemType menuList[8]);
void printCheck(menuItemType menuList[8]);

int main()
{
	menuItemType menuList[8];
	
	getData(menuList);
	showMenu(menuList);
	printCheck(menuList);
	
	return 0;
}

void getData(menuItemType menuList[8])
{
	
	menuList[0].menuItem = "Plain Egg"; 
	menuList[0].menuPrice = 1.45;
	menuList[1].menuItem = "Bacon and Egg";
	menuList[1].menuPrice = 2.45;
	menuList[2].menuItem = "Muffin";
	menuList[2].menuPrice = 0.99;
	menuList[3].menuItem = "French Toast";
	menuList[3].menuPrice = 1.99;
	menuList[4].menuItem = "Fruit Basket";
	menuList[4].menuPrice = 2.49;
	menuList[5].menuItem = "Cereal";
	menuList[5].menuPrice = 0.69;
	menuList[6].menuItem = "Coffee";
	menuList[6].menuPrice = 0.50;
	menuList[7].menuItem = "Tea";
	menuList[7].menuPrice = 0.75;
	
}

void showMenu(menuItemType menuList[8])
{
	cout << "Enter the number of your selections until you are finished, then enter -1.\n" << endl;
	cout << "1 - Plain Egg" << setw(14) << "$1.45" << endl;
	cout << "2 - Bacon and Egg" << setw(10) << "$2.45" << endl;
	cout << "3 - Muffin" << setw(17) << "$0.99" << endl;
	cout << "4 - French Toast" << setw(11) << "$1.99" << endl;
	cout << "5 - Fruit Basket" << setw(11) << "$2.49" << endl;
	cout << "6 - Cereal" << setw(17) << "$0.69" << endl;
	cout << "7 - Coffee" << setw(17) << "$0.50" << endl;
	cout << "8 - Tea" << setw(21) << "$0.75\n" << endl;
}

void printCheck(menuItemType menuList[8])
{
	int selections = 0;
	
	while(selections != -1)
	{
		cout << "\nEnter selection: ";
		selections += selections;
		cin >> selections;
		
		switch(selections)
		{
			case -1:
				break;
			case 1:
				cout << menuList[0].menuItem << setw(14) << "$1.45";
				break;
			case 2:
				cout << menuList[1].menuItem << setw(10) << "$2.45";
				break;
			case 3:
				cout << menuList[2].menuItem << setw(17) << "$0.99";
				break;
			case 4:
				cout << menuList[3].menuItem << setw(11) << "$1.99";
				break;
			case 5:
				cout << menuList[4].menuItem << setw(11) << "$2.49";
				break;
			case 6:
				cout << menuList[5].menuItem << setw(17) << "$0.69";
				break;
			case 7:
				cout << menuList[6].menuItem << setw(17) << "$0.50";
				break;
			case 8:
				cout << menuList[7].menuItem << setw(20) << "$0.75";
				break;
			default:
				cout << "Selections must be between 1 and 8\n";
				break;
		}
	}
	cout << "\nWelcome to Josh's Restaurant" << endl;
	cout << "Tax" << setw(10) << endl;
	cout << "Amount Due" << setw(10) << endl;
	
}