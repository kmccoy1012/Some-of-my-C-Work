#include <iostream>
using namespace std;

int main ()
{
	
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<=i; j++)
		{
		cout << "*";
		}
		cout << endl;
	}
	
	for (int i=0; i<=4; i++)
	{
		for (int j=0; j<=i*2; j++)
		{cout << "*";
		}
		
	}
    return 0;
}
