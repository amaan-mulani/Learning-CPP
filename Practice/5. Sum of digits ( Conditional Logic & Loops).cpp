#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int digit=0;
	int sum=0;
	while(n!=0)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
		
	}
	cout<<"\n Sum:  "<<sum;
}