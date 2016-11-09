#include <iostream>
#include <iomanip>

using namespace std;

string names[5];
int votes[5];
int totalVotes;
int winner; 
int winnerVotes;

// function prototypes
void get_input();
void winning();
void show_output();

int main () {
	
    get_input();
	winning();
	show_output();
	
    return 0;
}

void get_input()
{
	int i;
	totalVotes = 0;
	
	for (i=0;i<5;i++){
		cout << "Enter Last Name of Candidate" << endl;
		cin >> names[i]; //store the name of the candidate
		cout << "Enter Number of Votes received " << endl;
		cin >> votes[i]; //store the number of votes that this candidate received
		totalVotes += votes[i]; //update the totalVotes counter
	}
}

void winning()
{

	int i;
	winner = 0;
	winnerVotes = votes[0]; 
	
	
	for (i=1;i<5;i++){
		if ( winnerVotes < votes[i] ) {
			winner = i; 
			winnerVotes = votes[i]; 
		}
	}
}

void show_output(){
	int i;
	cout <<"Candidate"<<"  "<<"Votes Received"<<left<<"  "<<"% of Total Votes"<<endl;
	for ( i = 0; i < 5; i++ ){
		cout.width(9);
		cout << left<<names[i] <<"  "<<left<<votes[i]<<"  "<<std::fixed<<setprecision(2)<<(votes[i]*100/(float)totalVotes)<<endl;
	}
	cout.width(9);
	cout <<"Total "<<left<<"\t\t"<<totalVotes<<endl;
	cout <<"The Winner of the Election is "<<names[winner]<<endl;
	
}