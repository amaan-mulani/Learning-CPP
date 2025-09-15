#include<iostream>

using namespace std;

int main(){
	
	int n;
	int number;
	int reversed=0;
	int digit;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<number;
	n=number;
	while (n!=0)
	{
		digit=n%10;
		reversed=reversed*10+digit;
		n=n/10;
	}
	if(number == reversed)
		cout<<"\nIt is a palindrome.";
	
	else
		cout<<"\nNot a palindrome.";
}
