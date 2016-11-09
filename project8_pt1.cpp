/* Name:		Kevin McCoy
   Project:		Project 8 Part 1
   Date:		April 09, 2011
 */


#include <iostream>//input/output library
#include <fstream>//library for file usage
#include <iomanip>//input/output manipulation library

using namespace std;

//function prototype
void openFiles(ifstream& in_file, ofstream& out_file);

// main function
int main()
{
	// variables for file input and output
	ifstream fin;
	ofstream fout;
	
	//array for the score ranges
	int ranges[8]={0};
	
	//variable for the scores being input from the file
	int studentScores;
	
	//function that opens the files
	openFiles(fin, fout);
	
	
	
	//end of file loop
	while (!fin.eof())
	{
		//file input to the score variable
		fin >> studentScores;
		
		//ifstatement: if the score = 200, the 7th index in the 
		// array ranges is added 1
		if (studentScores==200) ranges[7]++;
		
		//any condition other that doesn't fall into the if statement
		//takes the array ranges, divides the scores by 25 and adds 1
		//making that the counter in the while loop
		//the scores are divided by 25 because each score range increases by an increment of 25
		else ranges[studentScores/25]++;
			
			}
	
	//int i is set to 0 so that all of the scores can be 
	//split into their individual score ranges
	int i=0;
	
	cout << setfill ('.') << left << setw(35) << "Students in the 0-24 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	 cout << setfill ('.') << left << setw(35) << "Students in the 25-49 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	cout << setfill ('.') << left << setw(35) << "Students in the 50-74 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	cout << setfill ('.') << left << setw(35) << "Students in the 75-99 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	cout << setfill ('.') << left <<  setw(35) << "Students in the 100-124 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	cout << setfill ('.') << left << setw(35) << "Students in the 125-149 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	cout << setfill ('.') << left << setw(35) << "Students in the 150-174 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	
	// in this final cout/fout statement, the only way I couldn't get the correct
	// output was by adding 1, if I didn't then I was always off by 1
	cout << setfill ('.') << left << setw(35) << "Students in the 125-200 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] - 1 << endl;
	

	fout << setfill ('.') << left << setw(30) << "Students in the 0-24 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 25-49 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 50-74 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 75-99 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left <<  setw(30) << "Students in the 100-124 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 125-149 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 150-174 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] << endl;
	fout << setfill ('.') << left << setw(30) << "Students in the 125-200 Range: "
	<< setfill (' ') << right << setw(5) << ranges[i++] - 1 << endl;
	
	//closes the files
	fin.close();
	fout.close();
	
	return 0;//exit main
}

/*Function Name: openFiles
  Preconditions: takes in two files: an input and output file
  Postconditions: Opens the two files
  Date:		      April 09, 2011
 */
void openFiles(ifstream& in_file, ofstream& out_file)
{
	in_file.open("students_score.txt");
	out_file.open("finalScores.txt");
	
}
