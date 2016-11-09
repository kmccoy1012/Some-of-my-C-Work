/* Name:	Kevin McCoy
   Date:	March 15, 2011
   Project:	Six, part 1
   */

// libraries
#include <iostream> // input/output 
#include <iomanip>  // manipulator library for fixed, showpoint, setprecision
#include <fstream>  // input/output files

using namespace std;

// function prototypes
void openFiles (ifstream& in_file, ofstream& out_file);
void initialize (int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA);
void sumGrades (int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA, ifstream& in_file);
void averageGrade (int countFemale, int countMale, double sumFemaleGPA, double sumMaleGPA, double& male, double& female);
void printResults (double male, double female, ofstream& out_file, int countFemale, int countMale);

// main function
int main () {
	
	// input file variable
    ifstream fin;
	
	//output file variable
	ofstream fout;
	
	// variables to be passed into the functions
	int maleNumber, femaleNumber;
	double maleGPA, femaleGPA, maleAVG, femaleAVG;
	
	// calls function to open the files
	openFiles(fin, fout);
	
	// initializes the counters and the GPA sums
	initialize(femaleNumber, maleNumber, maleGPA, femaleGPA);
	
	// function to get the sum of the grades
	sumGrades(femaleNumber, maleNumber, femaleGPA, maleGPA, fin);
	
	// function for the averages
	averageGrade(femaleNumber, maleNumber, femaleGPA, maleGPA, maleAVG, femaleAVG);
	
	// outputs the results to a file
	printResults(maleAVG, femaleAVG, fout, femaleNumber, maleNumber);
	
	
	
    return 0; // exit main function
}




/* 1. Function Name: openFiles
   2. Preconditions: this function takes an input and output file
   3. Postconditions: the function opens both files and formats 
      the output file to 2 decimal places */
void openFiles (ifstream& in_file, ofstream& out_file)
{

	in_file.open("studentGPA.txt"); // opens the input file
	out_file.open("finalGPA.txt");  // opens the output files 
}



/* 1. Function Name: initialize
   2. Preconditions: this function takes four variables
   3. Postconditions: the function sets all four variables to 0 */
void initialize (int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA)

{
	// all variables are set to 0
	countFemale = 0;
	countMale = 0;
    sumFemaleGPA = 0;
	sumMaleGPA = 0;
}

/* 1. Function Name: sumGrades
   2. Preconditions: this function takes in five parameters
   3. Postconditions: the function contains a while loop to 
	  count the GPAs of the males and females and counts the males and females */
void sumGrades (int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA, ifstream& in_file)
{
	// character variable 
	char gender;
	double inputGPA;
	
	
	// end of file loop
	while (!in_file.eof())
	
	{
		// reads the input file, reads the gender character first
		// and then the gpa second
		in_file >> gender >> inputGPA;
		
		// if statement for if
		// the character in front of the GPA
		// is a m or M for male
		if (gender == 'm' || gender == 'M')
		{
			sumMaleGPA += inputGPA;
			countMale++;
		}
		
		// if the character is f or F for female
		else if(gender == 'f' || gender == 'F')
		{
			sumFemaleGPA += inputGPA;
			countFemale++;
		}
		
	}

}

/* 1. Function Name: averageGrade
   2. Preconditions: takes in 6 parameters
   3. Postconditions: takes the sum of the male GPAs and divides by the # of male students
      takes the sum of the female GPAs and divides by the # of female students
 */
void averageGrade (int countFemale, int countMale, double sumFemaleGPA, double sumMaleGPA, double& male, double& female)
{

	male = sumMaleGPA / countMale;
    female = sumFemaleGPA / countFemale;
}


/* 1. Function Name: printResults
   2. Preconditions: takes in 5 parameters
   3. Postconditions: outputs the results to the output file
 */
void printResults (double male, double female, ofstream& out_file, int countFemale, int countMale)

{
	out_file << fixed << showpoint << setprecision(2); // sets the output file to 2 decimal places
	out_file << endl;
	out_file << setw(30) << left << "Number of male students: " <<
	countMale << endl;
	out_file << setw(30) << left << "Number of female students: " <<
	countFemale << endl;
	out_file << setw(30) << left << "Average male GPA: " <<
	male << endl;
	out_file << setw(30) << left << "Average female GPA: " <<
	female << endl;
	
}