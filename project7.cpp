/* Name:		Kevin McCoy
   Date:		April 1, 2011
   Project:		Seven
 */

// libraries
#include <iostream> // input/output 
#include <string> // string library
#include <fstream>  // input/output files

using namespace std;


// function prototypes
string manip (string var);
void openFiles (ifstream& in_file, ofstream& out_file);
void output (string names, ofstream& out_file);


// main function
int main () {
	
	// input/output file variables
    ifstream finput;
	ofstream foutput;
	
	// function that opens the files
	openFiles(finput, foutput);
	
	// string variables 
	string inputStr;
	string newName;
	
	
	// while loop that runs until the end of the file
	while (!finput.eof())
	{ 
		// getline will get the info on the line
		// until the end of the file
		getline(finput, inputStr);
		
		// manip function is called to manipulate the input string
		newName = manip(inputStr);
		
		// the new names are output to the file and to the console
		output(newName, foutput);
		
	}
	
	
	
	// closes the files
	finput.close();
	foutput.close();
	
	return 0; // exit main function
}


/* 1. Function Name: openFiles
 2. Preconditions: takes two files, in_file, out_file
 3. Postconditions: opens the two files
 4. Date of Config: April 1, 2011*/
   
void openFiles (ifstream& in_file, ofstream& out_file)
{
	in_file.open("names.txt");
	out_file.open("newNames.txt");
	
}



/* 1. Function Name: output
 2. Preconditions: takes a string and the output file
 3. Postconditions: will output the string to the console and the output file
 4. Date of Config: April 1, 2011*/

void output (string names, ofstream& out_file)
{

	// outputs the new names to the user and the output file
	cout << names << endl;
	out_file << names << endl;
}




/* 1. Function Name: manip
 2. Preconditions: takes in one string
 3. Postconditions: string manipulation occurs within the function
 4. Date of Config: April 1, 2011*/
string manip (string var)
{
	int strLength, strIndex;
	string name, last, finalName;
	
	// length defines the length of the string var
	strLength = var.length();
	// index finds the index of ','
	strIndex = var.find(',');
	
	// finds the last name
	last = var.substr(0, strIndex);
	
	// name captures the names that after the space of the last name
	name = var.substr(var.find(' ') + 1);
	
	// the final name
	finalName = name + ' ' + last;
	

	return finalName; // returns endName
}