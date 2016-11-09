/* Name:	Kevin McCoy
   Project: Final Exam
   Date:	April 28, 2011
*/

// Libraries Named
#include <iostream>
#include <string>
#include <iomanip>
#define SIZE 20

using namespace std;
// Struct coasterStruct, has three parameters

typedef struct coasterStruct 
{
	string coasterName;
	string coasterPark;
	string coasterLoc;
	char coasterType;
	char coasterRatings;
}TESTED;


// function to show the menu to the user
void showMenu()
{
	
	cout << "1. Add Coaster" << endl;
	cout << "2. Add Coaster Ratings(Overall Thrill, Hills, Scariness)" << endl;
	cout << "3. Search for a Coaster by Type" << endl;
	cout << "4. Search for a Coaster by Name" << endl;
	cout << "5. Show a Listing of All Coasters" << endl;
	cout << "6. Search for a Coaster by Rating" << endl;
	cout << "7. Save Database to a file" << endl;
	cout << "8. Load Database from a file" << endl;
	cout << "9. Exit" << endl;
}


TESTED getCoaster(void)
{
	TESTED temp;
	cout << "Enter the Coaster's name: ";
	cin >> temp.coasterName;
	cout << "Enter the Theme Park's name: ";
	cin >> temp.coasterPark;
	cout << "Enter the park's location: ";
	cin >> temp.coasterLoc;
	cout << "Is the coaster Wood or Metal?(W or M);";
	cin >> temp.coasterType;
	cout << "Enter the Ratings: ";
	cin >> temp.coasterRatings;
	return temp;
}
	
int main () {
	
	int selection = 0;
	TESTED info[SIZE];
	
	for(int i=0;i<SIZE;i++)
	{
		info[i]=getCoaster();
	}
	
	while (selection !=9) {
		showMenu();
		cin >> selection;
		if (selection = 1) {
			getCoaster(info);
		}
		
	}
    
    return 0;
}
