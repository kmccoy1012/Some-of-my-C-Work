retirement.h


#include <iostream>
#include <string>
using namespace std;
#include <math.h>
#ifndef _RETIREMENT_H_
#define _RETIREMENT_H_

class retirement{
private:
	//all variables are private(encapsulation)
	float interest, deposit;
	double principal, accumulation;
	int m, years;
	
public:
	
	//constructors
	retirement( double p, int y,float i,int mu,float d) : interest(i), m(mu), years(y), principal(p), deposit(d) {}
	retirement( double p, int y,float i, int mu ) : interest(i), m(mu), years(y), principal(p), deposit(0) {}
	retirement( double p, int y,float i) : interest(i), m(0), years(y), principal(p), deposit(200) {}
	retirement( double p, int y ) : interest(.05), m(0), years(y), principal(p), deposit(200) {}
	retirement( double p ) : interest(.05), m(0), years(30), principal(p), deposit(200) {}
	retirement() : interest(.05), m(0), years(30), principal(2500), deposit(200) {}
	
	
	~retirement(){
		//cout << "Dtor " << endl;
	}
	//displays all information in class
	void display(){
		cout << "accumulation " << accumulation << " over " <<years << "years"
		<<" with " << interest *100 << "% interest, with " << m << " number of $"<<
		deposit << "deposits per year" <<endl;
	}
	//getters
	int getM(){return m;}
	int getYears(){return years;}
	double getPrincipal(){return principal;}
	double getAccumulation(){return accumulation;}
	float getInterest(){return interest;}
	float getDeposit(){return deposit;}
	
	//setters
	void setM(int in){m = in;}
	void setYears(int in){years = in;}
	void setPrincipal(double in){principal = in;}
	void setAccumulation(double in){accumulation = in;}
	void setInterest(float in){interest = in;}
	void setDeposit(float in){deposit = in;}
	
	//Functions
	double constDeposit(); //process variable time
	double constYears(); //process variable deposit
};
double retirement::constDeposit(){
	//formula provided
	accumulation = principal*(pow(1+interest/m,m*years)) + deposit*((pow((1. +interest/m),m*years) -1.)/(interest/m));
	
	return accumulation;
}
double retirement::constYears(){
	//formula provided
	deposit = accumulation*(interest/m)/(pow(1+interest/m,m*years)-1);
	
	return deposit;
}
#endif



i hope this helps

drver.cpp

#include <iostream>
#include <string>
#include "retirement.h"
using namespace std;
int main (){
	retirement r1(0.,25,.048, 12, 500);
	cout <<r1.constDeposit()<<endl;
	return 0;
}