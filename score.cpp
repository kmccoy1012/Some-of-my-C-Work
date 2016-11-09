// scores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	fstream f_ScoreFile;
	int arr_Ranges[8]={0};
	
	f_ScoreFile.open ("students_score.txt", ios::in); //open the student scores file

	int score onescore[256];
	while (!f_ScoreFile.eof())
	{
		f_ScoreFile.getline(onescore,256,',');
		int score = atoi(onescore);

		if (score==200) arr_Ranges[7]++;
		else arr_Ranges[score/25]++;      //divide the score by 25 and assign it to individiual counter element
	}

	//output
	int i=0;
	cout << "range    0-24, number of students: " << arr_Ranges[i++] << endl;
	cout << "range   25-49, number of students: " << arr_Ranges[i++] << endl;
	cout << "range   50-74, number of students: " << arr_Ranges[i++] << endl;
	cout << "range   75-99, number of students: " << arr_Ranges[i++] << endl;
	cout << "range 100-124, number of students: " << arr_Ranges[i++] << endl;
	cout << "range 125-149, number of students: " << arr_Ranges[i++] << endl;
	cout << "range 150-174, number of students: " << arr_Ranges[i++] << endl;
	cout << "range 175-200, number of students: " << arr_Ranges[i++] << endl;

	f_ScoreFile.close();
	getchar();
	return 0;
}


