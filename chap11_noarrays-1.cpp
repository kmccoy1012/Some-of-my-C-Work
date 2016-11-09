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

void initialize(studentType& student);
void getData(studentType& student, istream& in=cin);
void printStudent(studentType student, ostream& out=cout);

int main()
{
	// create 3 variables of type studentType
	studentType kyle, valerie, ali;

	initialize(kyle);
	initialize(ali);
	initialize(valerie);

	getData(kyle);
	getData(valerie);
	getData(ali);

	printStudent(kyle);
	printStudent(ali);
	printStudent(valerie);

/*	kyle.name = "Kyle Adkins";
	valerie.gpa = 1.75;
	ali.id = "901111111";

	cout << kyle.name;

	newStudent = kyle;

	if (newStudent.name == kyle.name && newStudent.gpa == kyle.gpa
			&& newStudent.id == kyle.id)
		cout << "Same person";
*/
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