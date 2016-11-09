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
void openFiles(ifstream& in_file, ofstream& out_file);


// main function
int main () {
 
// input/output file variables
    ifstream fin;
	ofstream fout;
 
// function that opens the files
openFiles(fin, fout);
 
// string variables 
string it;
string newName;
 

// while loop that runs until the end of the file
while (!fin.eof())
{ 
	// getline will get the info on the line
	// until the end of the file
	getline(fin, it);
	// manip function is called
	newName = manip(it);
	// the new names are output to the file
	fout << newName << endl;
 
}


// closes the files
fin.close();
fout.close();
 
return 0; // exit main function
}


// void function that opens the files
void openFiles (ifstream& in_file, ofstream& out_file)
{
	in_file.open("names.txt");
	out_file.open("finalNames.txt");
}



// 1. Function Name: manip
string manip (string var)
{
	int index, length;
	string name, last, endName;
 
	// length defines the length of the string var
	length = var.length();
	// index finds the index of ','
	index = var.find(',');
	// finds the last name
	last = var.substr(0, index);
	
	// if statement to handled more than 1 space
	// and is used to determine if there is a middle name
	if (length > var.find(' '))
	{
		name = var.substr(var.find(' ') + 1);
		endName = name + ' ' + last;

	}
	
	//endName = name + ' ' + last;

 
return endName;
}