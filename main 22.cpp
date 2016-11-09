#include <iostream>

using namespace std;

int main () 

{
    // variables for the starting values in the fibonacci sequence
	unsigned int first, second;
	unsigned int nextvalue;
	
	// variable input for the nth number
	int n;
	
	// counter variable (incrementer) for our while loop
	unsigned int count;
	
	// intro
	cout << "This program will take in 2 numbers in the Fibonacci" << endl
		 << "sequence and output the nth number in the sequence" << endl
		 << "given the value for n." << endl << endl;
	
	// get the first two numbers in the sequence from the user
	cout << "What is the first number in the sequence?: ";
	cin  >> first;
	cout << "What is the second number in the sequence?: ";
	cin  >> second;
	cout << "What number in the sequence (n) do you wish to find?; ";
	cin  >> n;
	
	// next number in the fibonacci = first + second, or better said
	// previous two numbers in the sequence
	
	
	// set up acounter-controlled while loop
	
	if (n == 1)
		nextvalue = first;
	else if (n == 2)
		nextvalue = second;
	else {
		
	
	while (count < n-2) 
	{
		// find the next value
		nextvalue = first+second;
		// old second now becomes the first and second is the next value
		first = second;
		second = nextvalue;
		count++;
	}
	}
	cout << "The " << n << "th number in the Fibonacci sequence is: "
	<< nextvalue << endl;
	
    return 0;
}
