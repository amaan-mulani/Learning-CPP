#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num1, num2, num3;
	cout<<"Enter number 1:";
	cin>>num1;
	
	cout<<"Enter number 2:";
	cin>>num2;
	
	cout<<"Enter number 3:";
	cin>>num3;
	
	if (num1>num2 && num1>num3)
		cout<<num1<<" Number 1 is the largest number.";
		
	else if (num2>num1 && num2>num3)
		cout<<num2<<" Number 2 is the largest number.";
		
	else if (num3>num2 && num3>num1)
		cout<<num3<<" Number 3 is the largest number.";
		
	else 
		cout<<"All numbers are equal.";		
}
