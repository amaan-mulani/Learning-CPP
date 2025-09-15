#include<iostream>

using namespace std;

int main(){
	int year;
	cout<<"\nEnter a year: ";
	cin>>year;
	
	if(year%4==0)
		cout<<"It's a Leap Year.";
		
	else
		cout<<"Not a Leap Year.";		
}
