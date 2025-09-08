#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Number you entered is: "<<num;
	if (num > 0)
		cout<<" Number is a positive number.";
		
	else if (num < 0)
		cout<<" Number is a negative number.";
		
	else if (num == 0)
		cout<<" Number is 0";
		
	else 
		cout<<"Enter a valid number";		
}
