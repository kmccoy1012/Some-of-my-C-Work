#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	int i=0;
	string name;
	char cont = 'y';
	bool flag = true;
	
	// loop syntax
	// while (condition)
	// { CODE }
	
	// counter controlled loop
	while (i < 20)
	{
		cout << "RED SOX IN 2011!" << endl;
		i++;
	}
	
	// sentinenl controlled loops
	while (toupper(cont) != 'N')
	{
		cout << "Who are you? ";
		cin >> name;
		cout << "Enter another name (y/n)? ";
		cin >> cont;
	}
	
	// sentinenl controlled loops
	while (i != -1)
	{
		cout << "Enter a number to average, enter -1 to stop: ";
		cin >> i;
	}
	
	// flag controlled loop
	while (flag)
	{
		cout << "Guess my favorite number: ";
		cin >> i;
		if (i == 13)
			flag = false;
	}
	
	// EOF controlled while loop
	// This is a bad habit, but I'm going to contain everything for this
	// example right here... always declare your variables at the top
	int			count = 0;		// counter
	int			totalpoints = 0;// accumulator
	int			temp;			// hold each grade from the file
	double		grade;			// averaged grade
	string		filename;		// input file name
	ifstream	fin;
	
	cout << "Enter the name and location of the file to read from: ";
	cin >> filename;
	
	// open the user's file
	fin.open(filename.c_str());
	
	// set up your loop to continue until the end of the file
	// read in a grade
	fin >> temp;
	while (!fin.eof())
	{
		// add that grade to the accumulator
		totalpoints += temp;
		// increment our count by 1
		count++;
		// read in a grade
		fin >> temp;
	}
	
	// average the grade and output the result
	grade = static_cast<double>(totalpoints) / count;
	cout << "Your grade is a(n) " << grade << endl;
	return 0;
}