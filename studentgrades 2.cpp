#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

const int SIZE = 4;
const int EXAMS = 5;

// function prototypes
void openInputFile(ifstream& fin);
void printResults (string students[], int grades[][EXAMS], ostream& out=cout);

int main()
{
	string students[SIZE];		//array to hold student names
	int grades[SIZE][EXAMS];	//2D array to hold each student's grades
	ifstream fin;				//input file

	// open our input file
	cout << "Welcome to the Grade Center." << endl << endl;
	openInputFile(fin);

	// can use a for loop to loop through the file if you know how many students you have
	for (int i=0; i<SIZE; i++)
	{
		fin >> students[i];		// read a student's name
		for (int j=0; j<EXAMS; j++)
		{
			fin >> grades[i][j];	// read each exam into the grades array
		}
	}

	// print the results
	printResults(students, grades);

	return 0;
}

void openInputFile(ifstream& fin)
{
	string filename;			//name and location of input file
	cout << "Where is your data file?: ";
	cin >> filename;
	fin.open(filename.c_str());	// because filename is a string, must 
								// convert to C String
}

void printResults (string students[], int grades[][EXAMS], ostream& out)
{
	int examTotal = 0;
	char examName[20];
	int examAverages[EXAMS] = {0};

	// prep our output with column headers
	cout << left << setw(10) << "Name";
	for (int i=0; i<EXAMS; i++)
	{
		// format the output string to be fancy
		sprintf(examName, "Exam %d", (i+1));
		cout << setw(10) << examName;
	}
	cout << setw(10) << "Average" << endl;

	// set up a loop to output each student's records
	for (int i=0; i<SIZE; i++)
	{
		cout << setw(10) << students[i];
		for (int j=0; j<EXAMS; j++)
		{
			cout << setw(10) << grades[i][j];
			// add to the accumulator for this student
			examTotal += grades[i][j];
			// add up the grades in each column
			examAverages[j] += grades[i][j];	 
		}
		cout << setw(10) << examTotal/EXAMS << endl;
		// reset our accumulator
		examTotal = 0;
	}

	// output the final row, with exam averages
	cout << left << setw(10) << "AVERAGES";
	for (int i=0; i<EXAMS; i++)
	{
		cout << setw(10) << examAverages[i]/SIZE;
	}
	cout << endl;
}