#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("scores.txt");
	
	int grade;
	int rangescore[7] = {0};
	int lowRange[8] = {0, 25, 50, 75, 100, 125, 150, 175};
	int highRange[8] = {24, 49, 74, 99, 124, 149, 174, 200};
	
		fin >> grade; 
		
	while(!fin.eof()) //Read items until program reaches EOF (End of File)
		
		{
			if (grade <= highRange[0])
			
				rangescore[0]++;
			
			else if (lowRange[1] <= grade && grade <= highRange[1])
			
				rangescore[1]++;
			
			
			else if (lowRange[2] <= grade && grade <= highRange[2])
				rangescore[2]++;
			
			else if (lowRange[3] <= grade && grade <= highRange[3])
				rangescore[3]++;
			
			else if (lowRange[4] <= grade && grade <= highRange[4])
				rangescore[4]++;
			
			else if (lowRange[5] <= grade && grade <= highRange[5])
				rangescore[5]++;
			
			else if (lowRange[6] <= grade && grade <= highRange[6])
				rangescore[6]++;
			
			else if (175 <= grade && grade <= 200)
				rangescore[7]++;
			else
				cout << "Error occured" << endl;
			
			fin >> grade;
		}
		
		//for(int i = 0; i <= 7; i++)
		//cout << rangescore[i] << endl;
	cout << "0-24 Range: " << rangescore[0] << endl;
	cout << "25-49 Range: " << rangescore[1] << endl;
	cout << "50-74 Range: " << rangescore[2] << endl;
	cout << "75-99 Range: " << rangescore[3] << endl;
	cout << "100-124 Range: " << rangescore[4] << endl;
	cout << "125-149 Range: " << rangescore[5] << endl;
	cout << "150-174 Range: " << rangescore[6] << endl;
	cout << "175-200 Range: " << rangescore[7] << endl;
	
		fin.close();
	
	return 0;
	
}