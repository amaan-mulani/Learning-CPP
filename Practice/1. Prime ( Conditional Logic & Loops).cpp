#include<iostream>
using  namespace std;

int main()
{
	for(int n=2; n<=100; n++) // Main number loop
	{
		bool prime=true;
		for(int i=2; i<n;i++) // Main number to be multiplied with
		{
			if(n%i==0)
			{
				prime=false;
				break;
			}
		}	
		if(prime)
		{
				cout<<n<<endl;
		}
		
	}
	return 0;
}