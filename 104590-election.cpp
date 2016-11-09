

#include <iostream>
#include <iomanip> //Used for the setprecision function
#define N 5
using namespace std;

char names[N][20];
int votes[N];
int totalVotes; //A counter to keep a record of total number of votes cast for all candidates
int winnerPos; //The position of the winner
int winnerVotes;//the number of votes the winner has received

void get_input(){
int i;
totalVotes = 0;
for (i=0;i<N;i++){
     cout << "Enter Last Name of Candidate" << endl;
     cin >> names[i]; //store the name of the candidate
     cout << "Enter Number of Votes received " << endl;
     cin >> votes[i]; //store the number of votes that this candidate received
     totalVotes += votes[i]; //update the totalVotes counter
}

}

void calculate_winner(){
int i;
winnerPos = 0;//arbitrarily assume the first person winner
winnerVotes = votes[0]; //so the winner has votes contained in the corresponding votes[0] location

//Now compare the votes[0] with votes[1], votes[2],..,votes[N] to find the real winner
for (i=1;i<N;i++){
    if ( winnerVotes < votes[i] ) {//There is someone with more votes
       winnerPos = i; //so this candidate is the winner
       winnerVotes = votes[i]; //update the winnerVotes
    }
}
}
void show_output(){
int i;
cout <<"Candidate"<<"\t\t"<<"Votes Received"<<left<<"\t\t"<<"% of Total Votes"<<endl;
for ( i = 0; i < N; i++ ){
    cout.width(9);
    cout << left<<names[i] <<"\t\t"<<left<<votes[i]<<"\t\t\t"<<std::fixed<<setprecision(2)<<(votes[i]*100/(float)totalVotes)<<endl;
}
cout.width(9);
cout <<"Total "<<left<<"\t\t"<<totalVotes<<endl;
cout <<"The Winner of the Election is "<<names[winnerPos]<<endl;

}

int main(){
get_input();
calculate_winner();
show_output();

return 0;
}
