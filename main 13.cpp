#include <iostream>
#include <iomanip>

using namespace std;
int main () {
    
	int i, totalVotes, winnersPosition, winnersVotes;
	string names[5];
	int votes[5];
	
	
	totalVotes = 0;
	
	for (i=0; i<5; i++) {
	

	cout << "Enter Candidate's Last Name: " << endl;
	cin >> names[i];
		cout << "Enter the Votes for the Candidate: " << endl;
		cin >> votes[i];
		
	}
	
	int j;
	winnersPosition = 0;
	winnersVotes = votes[0];
	for (j=1; j<5; j++)
	{
		if (winnersVotes < votes[j]) {
			winnersPosition = j;
			winnersVotes = votes[j];
		}
	}
	
	int k;
	for (k = 0; k < 5; k++); {
		cout.width(9);
		cout << left<<names[i] <<"\t\t"<<left<<votes[i]<<"\t\t\t"<<std::fixed<<setprecision(2)<<(votes[i]*100/(float)totalVotes)<<endl;
	}
	cout.width(9);
	cout <<"Total "<<left<<"\t\t"<<totalVotes<<endl;
	cout <<"The Winner of the Election is "<<names[winnersPosition]<<endl;
	

return 0;
}
