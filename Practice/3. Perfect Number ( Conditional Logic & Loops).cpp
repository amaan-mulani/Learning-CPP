#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a positive integer: ";
	if(n<0)
		cout<<"Enter a positive number.";
	else
		cin>>n;
			
	int sum=0;
	for(int i=1;i<n-1;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if (sum==n)
	{
		cout<<n<<" is a Perfect Number.";
	}
	else
		cout<<n<<" is not a Perfect Number.";
}