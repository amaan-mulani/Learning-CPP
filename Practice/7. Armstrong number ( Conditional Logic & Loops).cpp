#include<iostream>
using namespace std;
int main()
{
	int n, original_n, digit, sum=0;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	original_n=n;
	
	while(n!=0)
	{
		digit=n%10;
		sum= sum + digit*digit*digit;
		n=n/10;
	}
	
	if (sum==original_n)
		cout<<"The number "<<original_n<<" is an as armstrong number.";
		
	else 
		cout<<"The number "<<original_n<<"is not an armstrong number.";	
}