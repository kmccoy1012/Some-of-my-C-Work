#include<iostream>
#include<string>
using namespace std;

struct studentType
{
	string name;
	string id;
	double gpa;
	string classes[6];
	int currentNumCourses;
};

void initialize(studentType& student);
void getData(studentType& student);
void printStudent(studentType student);

int main()
{
	studentType chris, ben, kurt;

	initialize(chris);
	initialize(ben);
	initialize(kurt);

	getData(chris);
	getData(ben);
	getData(kurt);

	printStudent(chris);
	printStudent(ben);
	printStudent(kurt);

/*	chris.name = "Chris Meade";
	kurt.gpa = 4.00;
	ben.id = "901111111";

	cin >> kurt.name;
	cout << ben.id;
	cout << ben.name << ben.id << ben.gpa;

	ben = kurt;
	if (ben.name == kurt.name && ben.id==kurt.id && ben.gpa==kurt.gpa)
		cout << "same person???";
*/
	return 0;
}

void initialize(studentType& student)
{
	student.gpa = 0;
	student.currentNumCourses = 0;
}

void getData(studentType& student)
{
	char cont;

	cout << "Enter the student's name: ";
	cin >> student.name;
	cout << "Enter the student's ID: ";
	cin >> student.id;
	cout << "Enter the student's GPA: ";
	cin >> student.gpa;

	// get the current courses enrolled
	do
	{
		cout << "Enter a class you are enrolled in: ";
		cin >> student.classes[student.currentNumCourses++];
		cout << "Do you want to enter another one (y/n): ";
		cin >> cont;
	} while (cont != 'n');

}

void printStudent(studentType student)
{
	cout << "STUDENT INFORMATION:" << endl
		 << "Name: " << student.name << endl
		 << "ID: " << student.id << endl
		 << "GPA: " << student.gpa << endl
		 << "Current Classes:" << endl;
	for (int i=0; i<student.currentNumCourses; i++)
		cout << student.classes[i] << endl;
}