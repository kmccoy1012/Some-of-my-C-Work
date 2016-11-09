#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct studentType
{
	string name;
	double GPA;
};

void readFromFile(studentType allStudents[]);
void printResults(studentType singleStudent);
void printResults(studentType allStudents[]);

const int MENUSIZE = 7;

int main()
{
	studentType firstSet[3];
	studentType secondSet[3];
	int choice;
	string menu[MENUSIZE];
	menu[0] = "Chipolte Brownies";
	menu[1] = "Red Hot Chicken Fingers";
	menu[2] = "Bacon Sandwich w/Mustard";
	menu[3] = "5-GALLON Bucket of Coffee";
	menu[4] = "Slow Drip Coffee IV";
	menu[5] = "Fried Pickles w/Hot Sauce";
	menu[6] = "Deep Fried Oreo";

	firstSet[0].name = "Brian";
	firstSet[0].GPA = 4.0;
	firstSet[1].name = "Alex";
	firstSet[1].GPA = 3.75;
	firstSet[2].name = "Katie";
	firstSet[2].GPA = 2.75;

	readFromFile(secondSet);

	cout << "PRINTING SINGLES WITH LOOP IN MAIN: " << endl;
	for (int i=0; i<3; i++)
		printResults(firstSet[i]);

	cout << "PRINTING ALL WITH LOOP IN FUNCTION, PASSED AS ARRAY: "
		 << endl;
	printResults(secondSet);

	// HINT ON MENUS
	do {
		cout << "Welcome to the Nut Job's Restaurant" << endl;
		for (int i=0; i<MENUSIZE; i++)
			cout << i+1 << "  " << menu[i] << endl;
		cout << MENUSIZE+1 << "  STOP EATING" << endl;
		cin >> choice;

		cout << "YOU CHOSE: " << menu[choice-1] << endl;
	} while (choice != MENUSIZE+1);
	return 0;
}

void printResults(studentType singleStudent)
{
	cout << singleStudent.name << " " << singleStudent.GPA << endl;

}

void printResults(studentType allStudents[])
{
	for (int i=0; i<3; i++)
		cout << allStudents[i].name << " " << allStudents[i].GPA << endl;
	return;
}

void readFromFile(studentType allStudents[])
{
	ifstream fin;
	fin.open("people.txt");

	// don't do a for loop in yours or hard code the size
	for (int i=0; i<3; i++)
	{
		getline(fin, allStudents[i].name);
		fin >> allStudents[i].GPA;
		fin.get();
	}
}