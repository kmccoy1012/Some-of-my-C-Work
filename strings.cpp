#include<iostream>
#include<string>
using namespace std;

int main()
{
	string fullname = "Brian Michael Morgan";
	string name;
	name = "Brian Morgan";

	cout << "LENGTH OF name: " << name.length() << endl;
	cout << "SIZE OF name: " << name.size() << endl;

	cout << "OUTPUT INITIALS: ";
	cout << name[0];
	int pos = name.find(" ");
	cout << name[pos+1] << endl;

	cout << "MY FIRST NAME: " << name.substr(0, name.find(" "))
		 << endl;

	cout << "MY LAST NAME: " << name.substr(name.find(" ")+1)
		 << endl;

	string some = "John Jacob Jingleheimer Schmidt";

	if (some.find("Jac") == string::npos)
		cout << "NOT FOUND";
	else
		cout << "FOUND";

	return 0;
}
