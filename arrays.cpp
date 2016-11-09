#include<iostream>
using namespace std;

int main()
{
	// basic array declaration
	double grades[15] = {80, 100, 95, 0};
	// initialize array at declaration
	double exam1[15] = {0};
	int nums[3] = {10, 12, 14};

	cout << "What is Joel's Grade? ";
	cin >> grades[1];

	cout << "Here is Kurt's Grade: ";
	cout << grades[2] << endl;

	cout << "INDEX 10 of GRADES: " << grades[10] << endl;
	cout << "JUST GRADES: " << grades << endl;

	// input values into an array
	const int ARRAY_SIZE = 3;
	int test[ARRAY_SIZE];
	// for loop to enter values in to test
	for (int i=0; i<ARRAY_SIZE; i++)
	{
		cout << "Enter the value for position " << i+1 << ": ";
		cin >> test[i];
	}

	// for loop to output values in to test
	for (int i=0; i<ARRAY_SIZE; i++)
	{
		cout << "The value at position " << i+1 << ": "
		     << test[i] << endl;
	}

	return 0;
}