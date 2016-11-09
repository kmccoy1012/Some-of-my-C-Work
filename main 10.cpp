#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

struct menuItemType

{	string menuItem;
	double menuPrice;  
};


void getdata( menuItemType[],menuItemType[],int&);
void showMenu(menuItemType[], int);
void printCheck(menuItemType[],int );


int main()
{
	int items=0;
    menuItemType menuList[]={"Plain Egg",1.45,"Bacon and Egg",2.45,"Muffin",0.99,"French Toast",1.99,"Fruit Basket",2.49,"Cereal",0.69,"Coffee",0.50,"Tea",0.75
	};
	menuItemType order[10];
	
	cout << "************Welcome to Kevin's Crab Shack************" << endl << endl;
	cout <<"					     Our Menu" << endl << endl;
	cout << "	Item			   Price" << endl << endl;
	showMenu(menuList,8);
	cout << "*****************************************************" << endl << endl;
	getdata(menuList,order,items);
	printCheck(order,items);
	

	return 0;
}


void printCheck(menuItemType order[],int items)
{int i;
	double total=0,tax;
	cout << endl << endl;
	cout<<"************Your Check************" << endl << endl;
	cout <<"          Ordered Items" << endl << endl;
	cout << "    Item            Price" << endl;;
	showMenu(order,items);
	for(i=0;i<items;i++)
		total+=order[i].menuPrice;
	cout << endl;
	cout<<"    Total           "<<"$"<<setprecision(2)<<fixed<<total<<endl;
	tax=total*.05;
	cout <<"    Tax			   "<<"$"<<setprecision(2)<<fixed<<tax<<endl;
	cout <<"    Amount Due      "<<"$"<<setprecision(2)<<fixed<<total+tax<<endl;
	cout << "********************************" << endl;
}


void getdata(menuItemType menu[],menuItemType order[],int& items)
{char answer='Y';
	int n;
	while(answer =='Y' || answer == 'y')
	{cout<<"Enter your order item number: ";
		cin>>n;
		while(n<1||n>8)
		{cout<<"invalid item number" << endl;
			cout<<"Enter your order item number: ";
			cin>>n;
		}
		order[items].menuItem=menu[n-1].menuItem;
		order[items].menuPrice=menu[n-1].menuPrice;
		items++;
		cout<<"Would you like another item?(Y/N)? ";
		cin>>answer;
	}
}
void showMenu(menuItemType a[],int n)
{int i;
	
    for(i=0;i<n;i++)
		cout<<i+1<<".  "<<setw(16)<<left<<a[i].menuItem<<"$"<<setprecision(2)<<fixed<<a[i].menuPrice<<endl;
}