#include<iostream>
using namespace std;
int main()
{
	int n;
	double factorial=1;
	cout<<"Enter  a positive number: ";
	cin>>n;
	if(n<0)
		cout<<"Please enter a positive number.";
		
	else 
	{
		for(int i=1;i<=n;i++)
		{
			factorial*=i;
		}
		cout<<"The factorial of the number "<<n<< "is: "<<factorial;
	}	
}