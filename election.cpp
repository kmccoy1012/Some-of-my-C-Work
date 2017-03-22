#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

// Function prototypes
void inputCandidatesAndVotes (string candidatesArray[], double votesArray[]);
double totVotes (double votesArray[], double totalVotes);
void voteCalc (double votesArray[], double totalVotes, double& votePercOne, double& votePercTwo, double& votePercThree, double& votePercFour, double& votePercFive);
void findWinner (double& winner, int& winnerIndex, double votesArray[]);
void outputResults (string candidatesArray[], double votesArray[], double votePercOne, double votePercTwo, double votePercThree, double votePercFour, double votePercFive, 
	double totalVotes, int winnerIndex);

// Main function area

int main()
{
	// Variable declaration area
	string candidatesArray[4];
	double votesArray[4] = {0};
	double totalVotes = 0;
	double winner = 0;
	int winnerIndex = 0;
	double votePercOne = 0;
	double votePercTwo = 0;
	double votePercThree = 0;
	double votePercFour = 0;
	double votePercFive = 0;


	// Program intro
	cout << "Hello and welcome.  This program will help decide the outcome of an" << endl
		 << "election."  << endl << endl;

	// Function calls
	inputCandidatesAndVotes (candidatesArray, votesArray);
	totVotes (votesArray, totalVotes);
	voteCalc (votesArray, totalVotes, votePercOne, votePercTwo, votePercThree, votePercFour, votePercFive);
	findWinner (winner, winnerIndex, votesArray);
	outputResults (candidatesArray, votesArray, votePercOne, votePercTwo, votePercThree, votePercFour, votePercFive, totalVotes, winnerIndex);

	// Exit program
	system("PAUSE");
	return 0;
}

void inputCandidatesAndVotes (string candidatesArray[], double votesArray[])
{
	// Take the user's input for the candidates' names and vote totals
	cout << "Please input the first candidate's last name only." << endl;
	cin >> candidatesArray[0];
	cout << "Please input the first candidates votes, as a whole number." << endl;
	cin >> votesArray[0];
	cout << "Please input the second candidate's last name only." << endl;
	cin >> candidatesArray[1];
	cout << "Please input the second candidates votes, as a whole number." << endl;
	cin >> votesArray[1];
	cout << "Please input the third candidate's last name only." << endl;
	cin >> candidatesArray[2];
	cout << "Please input the third candidates votes, as a whole number." << endl;
	cin >> votesArray[2];
	cout << "Please input the fourth candidate's last name only." << endl;
	cin >> candidatesArray[3];
	cout << "Please input the forth candidates votes, as a whole number." << endl;
	cin >> votesArray[3];
	cout << "Please input the fifth candidate's last name only." << endl;
	cin >> candidatesArray[4];
	cout << "Please input the fifth candidates votes, as a whole number." << endl;
	cin >> votesArray[4];
	cout << endl << endl;
}

double totVotes (double votesArray[], double totalVotes)
{
	// Add up all the votes
	totalVotes = votesArray[0] + votesArray[1] + votesArray[2] + votesArray[3] + votesArray[4];
	return totalVotes;
}

void voteCalc (double votesArray[], double totalVotes, double& votePercOne, double& votePercTwo, double& votePercThree, double& votePercFour, double& votePercFive)
{
	// Find the percentage of total votes that each candidate received
	votePercOne = (votesArray[0]/totalVotes) * 100;
	votePercTwo = (votesArray[1]/totalVotes) * 100;
	votePercThree = (votesArray[2]/totalVotes) * 100;
	votePercFour = (votesArray[3]/totalVotes) * 100;
	votePercFive = (votesArray[4]/totalVotes) * 100;
}

void findWinner (double& winner, int& winnerIndex, double votesArray[])
{
	// Find the index of the highest number of votes and save it to a variable
	winner = votesArray[0];
	for (int i = 0; i < 4; i++)
	{
		if (winner < votesArray[i])
		{
			winner = votesArray[i];
			winnerIndex = i;
		}
	}
}

void outputResults (string candidatesArray[], double votesArray[], double votePercOne, double votePercTwo, double votePercThree, double votePercFour, double votePercFive, 
	double totalVotes, int winnerIndex)
{
		cout << setprecision(2) << fixed << showpoint
			 << "Candidate" << "Votes Received" << "% of Total Votes" << endl
			 << candidatesArray[0] << votesArray[0] << votePercOne << endl
			 << candidatesArray[1] << votesArray[1] << votePercTwo << endl
			 << candidatesArray[2] << votesArray[2] << votePercThree << endl
			 << candidatesArray[3] << votesArray[3] << votePercFour << endl
			 << candidatesArray[4] << votesArray[4] << votePercFive << endl 
			 << "Total" << totalVotes << endl << endl
			 << "The winner of this election is " << candidatesArray[winnerIndex];

}
