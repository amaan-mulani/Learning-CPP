#include<iostream>

using namespace std;

int main(){
	int units;
	float bill;
	cout<<"\nEnter the units: ";
	cin>>units;
	
	if(units<=100)
	{
		bill = units*100;
		cout<<bill;
	}	
	else if(units<=300)
	{
		bill= (100*5) + (units-100)*7;
		cout<<bill;
	}
	else
	{
		bill= (100*5) + (200*7) + (units -300)*10;
		cout<<bill;			
	}	
}
