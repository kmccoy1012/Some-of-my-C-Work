// libraries
#include <iostream> // input/output 
#include <string> // string library
#include <fstream>  // input/output files

using namespace std;


// function prototypes
string go (string var);


// main function
int main () {
 
// input/output file variables
    ifstream fin;
ofstream fout;
 
fin.open("names.txt", ios::app);
fout.open("finalNames.txt", ios::app);
 
 
string it;
string newName;
 
while (!fin.eof())
{ 
getline(fin, it);
newName = go(it);
fout << newName << endl;
 
}
 
fin.close();
fout.close();
 
return 0; // exit main function
}






// 1. Function Name: get
string go (string var)
{
	int index, length;
	string middle, last, end;
 
	length = var.length();
	index = var.find(',');
	last = var.substr(0, index);
	

	if (length > var.find(' '))
	{
		middle = var.substr(var.find(' ') + 1);
	}
	else 
		middle.empty();

	end = middle + ' ' + last;

 
return end;
}