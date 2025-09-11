#include<iostream>
using namespace std;

int number (int num1, int num2)
{
	if(num1%num2)
		cout<<num2<<" is GCD.";
	
	else
		number(num2, num1%num2);
		
}
int main()
{	
int num1, num2;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter second number: (Should be lesser than first number) ";
	cin>>num2;
	number(num1,num2);
}
