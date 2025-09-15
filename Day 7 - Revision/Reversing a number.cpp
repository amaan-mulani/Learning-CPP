#include<iostream>

using namespace std;

int main(){
	
	int n;
	int reversed=0;
	int digit;
	cout<<"Enter a number to reverse: ";
	cin>>n;
	cout<<n;
	
	while (n!=0)
	{
		digit=n%10;
		reversed=reversed*10+digit;
		n=n/10;
	}
	cout<<"\nReversed: "<<reversed;
}
