#include <iostream>
using namespace std;
#define SIZE 10

typedef struct
{
	char name[20];
	int homeruns;
	int hits;
}INFO;

INFO inputdata(void)
{
	INFO temp;
	
	cout<<"Enter name of Player: ";
	cin>>temp.name;
	cout<<"Enter the Player's number of homeruns: ";
	cin>>temp.homeruns;
	cout<<"Enter the Player's number of hits: ";
	cin>>temp.hits;
	cout<<"\n\n";
	
	return temp;
}

void outputdata(INFO s[])
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<i+1<<". "<<s[i].name;
		cout<<" has "<<s[i].homeruns;
		cout<<" homeruns and ";
		cout<<s[i].hits<<" hits"<<endl;
	}
}


int main(){
	INFO info[SIZE];
	
	for(int i=0;i<SIZE;i++)
	{
		info[i]=inputdata();
	}
	outputdata(info);
	

	return 0;
}