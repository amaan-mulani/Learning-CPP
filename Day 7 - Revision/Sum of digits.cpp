#include<iostream>

using namespace std;

int main(){
	
	int n;
	int number;
	int sum=0;
	int digit;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<number;
	n=number;
	while (n!=0)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
	}
	cout<<"\nSum of digits of number "<<number <<" is "<< sum;
}
