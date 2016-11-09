/* Name:		Kevin McCoy
   Date:		04/20/2011
   Project:		Project 9
*/

// libraries declared
#include <iostream>
#include <string>
#include <iomanip>
#define SIZE 8 // defined SIZE to = 8

using namespace std;


// structure for the menu items and prices
struct menuItemType
{
	string menuItem; // string
	double menuPrice; // double
};



// function prototypes
void showMenu(menuItemType list[]);
void getData(menuItemType list[]);
void initialize(int itemsYouHave[]);
void printCheck(int itemsYouHave[], menuItemType list[], double&);


// main function
int main ()
{
	// varialbes
	double totalBill = 0;
	int userSelection = 1;
	
	
	//arays
	menuItemType menuList[SIZE];
	int stuffIBought[SIZE];
	
	//call for functions
	getData(menuList);
	initialize(stuffIBought);


	// whie loop for the menu
	while (userSelection > 0 && userSelection <= 8) 
	{	
		// Intro Statement
	
	cout << "**************************************************" << endl;
	cout << "This program is a menu for a breakfast restaurant!" << endl;
	cout << "You have 8 different selections." << endl;
	cout << "To calculate your total and exit the program you" << endl;
	cout << "can press number 9. If you enter any other number" << endl;
	cout << "you will receive an error message." << endl;
	cout << "**************************************************" << endl << endl;
		
		// menu function is called to display the menu
		showMenu(menuList);
		
	cout << "Enter your selection: ";
		// user input 1-9
	cin >> userSelection;
		
		// If statements for the arrays and selections
		if (userSelection == 1)
			 stuffIBought[0]++;
		else if (userSelection == 2)
			 stuffIBought[1]++;
		else if (userSelection == 3)
			 stuffIBought[2]++;
		else if (userSelection == 4)
			stuffIBought[3]++;
		else if (userSelection == 5)
			 stuffIBought[4]++;
		else if (userSelection == 6)
			 stuffIBought[5]++;
		else if (userSelection == 7)
			 stuffIBought[6]++;
		else if (userSelection == 8)
			 stuffIBought[7]++;
		else if (userSelection == 9)
		{
			cout <<  endl;
			//Printcheck function is called
			printCheck(stuffIBought, menuList, totalBill);
			cout <<  endl;
			
			//outputs the results
			cout << "Before Tax:" << setw(8) << "$" << totalBill << endl;
			cout << "Tax:" << setw(15) << "$" << "" << totalBill * .05 << endl;
			cout << "Your Bill Is:" << setw(6) << "$" << totalBill * .05 + totalBill;}
		
		
		//if the user inputs any number other than 1-9, an error message is displayed
		else {
			cout << "YOU ENTERED AN INVALID KEY!" << endl;
		}

		
	}
	
	return 0; // exit main
}


/* Name of function:	showMenu
   Preconditions:		takes in an array of structs
   Post Condidtions:	outputs the menu item list
   Date of config:		04/19/2011
 */
void showMenu(menuItemType list[])
{
	// outputs the info about the menu
	cout << "Kevin's Crab Shack" << endl << endl;
	cout << "Enter your Selection and Press Enter" << endl;
	cout << "Press 9 to calculate your bill" << endl << endl;
	// outputs the menu items and prices based on their index in the array of structs
    for(int i=0;i<SIZE;i++)
		cout<<i+1<<".  "<< setw(16) << left << list[i].menuItem << "$" << setprecision(2) << fixed << list[i].menuPrice << endl;
}


/* Name of function:	getData
   Precoditions:		takes in the menuItemType list[] array
   Postconditions:      will set the indexs = to one another so that they're parrallel
   Date of config:		04/19/21
 */
void getData(menuItemType list[])
{
	
	list[0].menuItem = "Plain Egg"; 
	list[0].menuPrice = 1.45;
	list[1].menuItem = "Bacon and Egg";
	list[1].menuPrice = 2.45;
	list[2].menuItem = "Muffin";
	list[2].menuPrice = 0.99;
	list[3].menuItem = "French Toast";
	list[3].menuPrice = 1.99;
	list[4].menuItem = "Fruit Basket";
	list[4].menuPrice = 2.49;
	list[5].menuItem = "Cereal";
	list[5].menuPrice = 0.69;
	list[6].menuItem = "Coffee";
	list[6].menuPrice = 0.50;
	list[7].menuItem = "Tea";
	list[7].menuPrice = 0.75;
}


/* Name of function:	initialize
   Preconditions:		takes in an array
   Postconditions:		will initialize the array to 0
   Date of config:		04/20/2011
 */
void initialize(int itemsYouHave[])
{

	// for loop to initalize the amount of items the user has
	for(int i=0;i<SIZE;i++)
		itemsYouHave[i]= 0;

}



/* Name of function:	printCheck
   Preconditions:		takes in the amount of items the user has, the items the user has, and a reference variable for the total
   Postconditions:		Outputs the results
   Date of config:		4/20/2011
 */
void printCheck(int itemsYouHave[], menuItemType list[], double& totalCheck)
	{	
		double total = 0;
		
		// counter for the total amount of items
		for(int i=0; i<SIZE; i++)
		{total+=itemsYouHave[i] * list[i].menuPrice;
		
			// if the use has more than 0 items, the items, amount of items, and prices are output to the user
			// based on their array index
			if (itemsYouHave[i] > 0)
				cout << itemsYouHave[i] << " " << setw(16) << left << list[i].menuItem << right << "$" << list[i].menuPrice * itemsYouHave[i] << endl;}
		
		totalCheck = total;
		
	}
