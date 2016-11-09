#include <iostream>
#include <string>
#include "retirement.h"
using namespace std;
int main (){
	retirement r1(0.,25,.048, 12, 500);
	cout << "$" << r1.constDeposit() << endl;
	return 0;
}