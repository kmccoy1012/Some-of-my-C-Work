#include<iostream>
#include<string>
using namespace std;

const int SIZE = 10;
double average(const int arr[], int size);
int max(const int arr[], int size);
int min(const int arr[], int size);
int search(const int arr[], int size, int searchTerm);

int main()
{
	int nums[SIZE] = {13, 19, 17, 3, 9, 8, 21, 11, 7, 6};
	int searchResult;

	// parallel arrays
	int grades[5];
	string studs[5];

	studs[0] = "Kyle";
	grades[0] = 90;

	studs[1] = "Casey";
	grades[1] = 92;

	studs[2] = "Ali";
	grades[2] = 80;

	studs[3] = "Jonathan";
	grades[3] = 70;

	studs[4] = "Kevin";
	grades[4] = 78;

	cout << "Average of elements in array: " 
		 << average(nums, SIZE) << endl;
	cout << "Its maximum element is: " 
		 << max(nums, SIZE) << endl;
	cout << "Its minimum element is: "
		 << min(nums, SIZE) << endl;

	searchResult = search(nums, SIZE, 22222);
	if (searchResult != -1)
	{
		cout << "FOUND SEARCH TERM AT INDEX: " 
		<< searchResult << endl;
	}
	else
	{
		cout << "YOUR SEARCH RESULT WAS NOT FOUND" << endl;
	}

	// parallel arrays example to show WHO has the highest grade
	// find the max grade
	int maxgrade = max(grades, 5);
	// must find the index of the max grade
	int index = search(grades, 5, maxgrade);
	// now output whose grade it is
	cout << studs[index] << endl;

	return 0;
}

double average(const int arr[], int size)
{
	double avg = 0;
	for (int i=0; i<size; i++)
		avg += arr[i];
	return avg/size;
}

int max(const int arr[], int size)
{
	int maxnum;
	maxnum = arr[0];
	for (int i=1; i<size; i++)
	{
		if (maxnum < arr[i])
			maxnum = arr[i];
	}
	return maxnum;
}

int min(const int arr[], int size)
{
	int minnum;
	minnum = arr[0];
	for (int i=1; i<size; i++)
	{
		if (minnum > arr[i])
			minnum = arr[i];
	}
	return minnum;
}

int search(const int arr[], int size, int searchTerm)
{
	for (int i=0; i<size; i++)
	{
		if (arr[i] == searchTerm)
			return i;
	}
	return -1;
}