/********************************************
  Name:			Bo Morris
  Dates:		April 11, 2011
  Class:		IST163, 9:00 AM
  Assignment:   Lab 8, exercise 4
  Help Recvd:	None, except for in-class discussion
*********************************************/

#include<iostream>	
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

// Function prototypes
void openFiles(ifstream& fin);
void readScores(ifstream& fin, int& categorizeScore, int scoresArray[], int categoryArray[]);
void sortScores(int& categorizeScore, int categoryArray[]);
void populateNames(string categoryNameArray[]);
void printResults(int categoryArray[], string categoryNameArray[]);

// Main function area

int main()
{
	// Variable declaration area
	ifstream fin;  
	int categorizeScore = 0;
	int scoresArray[25] = {0};
	int categoryArray[7] = {0};
	string categoryNameArray[7];	

	// Program Intro
	cout << "Hello and welcome.  This program will read exam scores from a file " << endl
		 << "and sort them into score-based categories for you." << endl << endl;

	// Function calls
	openFiles(fin);
	readScores(fin, categorizeScore, scoresArray, categoryArray);
	populateNames(categoryNameArray);
	printResults(categoryArray, categoryNameArray);

	// Close files
	fin.close();

	// Exit program
	system("PAUSE");
	return 0;
}

void openFiles(ifstream& fin)
{
	// Open the input file
	fin.open("input.txt");
}

void readScores(ifstream& fin, int& categorizeScore, int scoresArray[], int categoryArray[])
{
	// Read the scores into scoresArray
	for (int i = 0; i < 25; i++)
	{
		fin >> scoresArray[i];		
		cin >> categorizeScore;
		sortScores(categorizeScore, categoryArray);
	}
}

void sortScores(int& categorizeScore, int categoryArray[])
{
	// Sort the scores into categories
	if (categorizeScore <= 24)
	{
		categoryArray[0]++;
	}
	else if (categorizeScore >= 25 && categorizeScore <= 49)
	{
		categoryArray[1]++;
	}
	else if (categorizeScore >= 50 && categorizeScore <= 74)
	{
		categoryArray[2]++;
	}
	else if (categorizeScore >= 75 && categorizeScore <= 99)
	{
		categoryArray[3]++;
	}
	else if (categorizeScore >= 100 && categorizeScore <= 124)
	{
		categoryArray[4]++;
	}
	else if (categorizeScore >= 125 && categorizeScore <= 149)
	{
		categoryArray[5]++;
	}
	else if (categorizeScore >= 150 && categorizeScore <= 174)
	{
		categoryArray[6]++;
	}
	else if (categorizeScore >= 175 && categorizeScore <= 200)
	{
		categoryArray[7]++;
	}
}

void populateNames(string categoryNameArray[])
{
	// Declare the individual values for the string array
	categoryNameArray[0] = "0-24:    ";
	categoryNameArray[1] = "25-49:   ";
	categoryNameArray[2] = "50-74:   ";
	categoryNameArray[3] = "75-99:   ";
	categoryNameArray[4] = "100-124: ";
	categoryNameArray[5] = "125-149: ";
	categoryNameArray[6] = "150-174: ";
	categoryNameArray[7] = "175-200: ";
}

void printResults(int categoryArray[], string categoryNameArray[])
{
	//Output the results
	for (int i=0; i<7; i++)
	{
		cout << categoryNameArray[i] << categoryArray[i];
	}
}