#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void openFiles (ifstream& in_file);
void range (ifstream& in_file, double& grades);

int main()
{
	ifstream fin;
	openFiles(fin);
	
	double grade;
	
	//int rangeThing[7] = {0}; //rangescore 0 to 7 all to 0 
	
	fin >> grade;  //Initiale read. If the file is empty it skips the while loop below
	
	while(!fin.eof()) //Read items until program reaches EOF (End of File)
		
	{
		if (grade >= 0 && grade <= 200)
			range(fin, grade);
			
			//for(int i = 0; i <= 7; i++)
			//cout << rangescore[i] << endl;
			
			fin.close();
		
	}
	
	
	return 0;
	
}


void openFile (ifstream& in_file)
{
	
	in_file.open("scores.txt");
}

void range (ifstream& in_file, double& grades)
{
	int lowRange[] = {25, 50, 75, 100, 125, 150, 175, 200};
	int highRange[]= {24, 49, 74, 99, 124, 149, 174, 199};
	int rangescore[7] = {0};
	
	ifstream fin;
	
	fin >> grades;
	
	if (grades <= highRange[0]) 
		rangescore[0]++;
		
		else if (grades >= lowRange[0] && grades <= highRange[1])
			rangescore[1]++;
	
		else if (grades >= 50 && grades <= 74)
			rangescore[2]++;
	
		else if (grades >= 75 && grades <= 99)
			rangescore[3]++;
	
		else if (grades >= 100 && grades <= 124)
			rangescore[4]++;
	
		else if (grades >= 125 && grades <= 149)
			rangescore[5]++;
	
		else if (grades >= 150 && grades <= 174)
			rangescore[6]++;
	
		else if (grades >= 175 && grades <= 200)
			rangescore[7]++;
		else
			cout << "Error occured" << endl;
	
	for(int i = 0; i <= 7; i++)
		cout << rangescore[i] << endl;
	cout << rangescore[0] << endl;

	cout << rangescore[1] << endl;
}