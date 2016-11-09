#include<iostream>
#include<string>
using namespace std;

struct studentType
{
	string id;
	string name;
	double gpa;
	string classes[5];
	int currentNumClasses;
};

const int SIZE=3;	// number of students
void initialize(studentType& student);
void getData(studentType& student, istream& in=cin);
void printStudent(studentType student, ostream& out=cout);

int main()
{
	// create an array of studentTypes for each student in the class
	studentType ist163[SIZE];

	// initialize and get the data for all students at once
	for (int i=0; i<SIZE; i++)
	{
		initialize(ist163[i]);
		getData(ist163[i]);
	}

	// output all students at once
	for (int i=0; i<SIZE; i++)
		printStudent(ist163[i]);


	// DEMO OF HOW TO ACCESS EACH COMPONENT OF ARRAY OF STRUCTS
	for (int i=0; i<SIZE; i++)
	{
		cout << "NAME of STUDENT: " << ist163[i].name << endl;
		for (int j=0; j<ist163[i].currentNumClasses; j++)
			cout << ist163[i].classes[j] << endl;
	}
	return 0;
}

void initialize(studentType& student)
{
	student.currentNumClasses = 0;
}

void getData(studentType& student, istream& in)
{
	char cont;

	// get their basic info
	cout << "Enter the student's name: ";
	in >> student.name;
	cout << "Enter the student's ID#: ";
	in >> student.id;
	cout << "Enter the student's GPA: ";
	in >> student.gpa;

	// get their classes
	do
	{
		cout << "Enter the name of your class: ";
		in.get();
		getline(in,  student.classes[student.currentNumClasses++]);
		cout << "Enter another course (y/n)?: ";
		in >> cont;
	} while (cont != 'n');
}

void printStudent(studentType student, ostream& out)
{
	out << "STUDENT INFORMATION:" << endl
		<< "Name: " << student.name << endl
		<< "ID: " << student.id << endl
		<< "GPA: " << student.gpa << endl
		<< "Enrollments: " << endl;
	for (int i=0; i<student.currentNumClasses; i++)
		out << student.classes[i] << endl;
	out << endl;
}