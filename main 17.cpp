#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//void openFiles (ifstream& in_file);
void range (ifstream& in_file, double& grades);

int main()
{
	ifstream fin;
	fin.open("scores.txt");
	
	double grade;
	int lowRange[] = {25, 50, 75, 100, 125, 150, 175, 200};
	int highRange[]= {24, 49, 74, 99, 124, 149, 174, 199};
	double rangescore[7] = {0};
	
	//int rangeThing[7] = {0}; //rangescore 0 to 7 all to 0 
	
	fin >> grade;  //Initiale read. If the file is empty it skips the while loop below
	
	while(!fin.eof()) //Read items until program reaches EOF (End of File)
	{
		
		if (grade <= highRange[0]) 
			rangescore[0]++;
		
		else if (grade >= lowRange[0] && grade <= highRange[1])
			rangescore[1]++;
		
		else if (grade >= 50 && grade <= 74)
			rangescore[2]++;
		
		else if (grade >= 75 && grade <= 99)
			rangescore[3]++;
		
		else if (grade >= 100 && grade <= 124)
			rangescore[4]++;
		
		else if (grade >= 125 && grade <= 149)
			rangescore[5]++;
		
		else if (grade >= 150 && grade <= 174)
			rangescore[6]++;
		
		else if (grade >= 175 && grade <= 200)
			rangescore[7]++;
		else
			cout << "Error occured" << endl;
		
	}
	
	for(int i = 0; i <= 7; i++)
		cout << rangescore[i] << endl;
	return 0;
	
}

