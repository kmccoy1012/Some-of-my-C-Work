#include<iostream>
#include<string>
using namespace std;

int main()
{
	string students[3];
	
	students[0] = "Chris";
	students[1] = "Ben Joel";
	students[2] = "Kurt";

	cout << students << endl
		 << students[0] << endl
		 << students[1][4] << endl;

	return 0;
}