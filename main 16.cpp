#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("scores.txt");
	
		int score;
	
		int rangescore[7] = {0}; //rangescore 0 to 7 all to 0 
	
		fin >> score;  //Initiale read. If the file is empty it skips the while loop below
		while(!fin.eof()) //Read items until program reaches EOF (End of File)
		{
			if (score >= 0 && score <= 24)
				rangescore[0]++;
			
			else if (score >= 25 && score <= 49)
				rangescore[1]++;
			
			else if (score >= 50 && score <= 74)
				rangescore[2]++;
			
			else if (score >= 75 && score <= 99)
				rangescore[3]++;
			
			else if (score >= 100 && score <= 124)
				rangescore[4]++;
			
			else if (score >= 125 && score <= 149)
				rangescore[5]++;
			
			else if (score >= 150 && score <= 174)
				rangescore[6]++;
			
			else if (score >= 175 && score <= 200)
				rangescore[7]++;
			else
				cout << "Error occured" << endl;
			
			fin >> score;
			
		}
		
		for(int i = 0; i <= 7; i++)
		    cout << rangescore[i] << endl;
		
		fin.close();
	return 0;
		
	}
	