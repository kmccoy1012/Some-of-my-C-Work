#include <iostream>
using namespace std;

int main () 
{
    double grade;
	int age;
	char registeredVote;
	
	cout << "How old is you?: ";
	cin >> age;
	cout << "are you registered to vote (y/n)?: ";
	cin.get(registeredVote);
	cin.ignore('\n');
			   
	// tell them if they can drive and vote
	
	if (age >= 16)
	{
		cout << "You can drive." << endl;
		if (registeredVote == 'y')
		{
			cout << "AND, you can vote." << endl;
		}
		else 
		{	
			cout << "BUT, you cannot vote." << endl;
		}
	}

	
	cout << "Enter your grade: ";
	cin  >> grade;
	
	//output their passing credit or not
	
	if (grade >= 60)
		cout << "You passed.";
	else 
		cout << "You failed.";
	
	cout << endl << endl;
	
	// output their letter grade

	if (grade >= 90)
		cout << "A - one of the lucky stiffs.";
	else if (grade >= 80)
		cout << "B - So close, but I got you.";
	else if (grade >= 70)
		cout << "C - Average.";
	else if (grade >= 60)
		cout << "D - So close to being a loser.";
	else 
		cout << "F - GOTCHA!  See you again next semester.";
    return 0;
}
