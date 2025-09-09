
#include<iostream>

using namespace std;
int main()
{
	int i,j,k=1;

	for(i=1;i<=3;i++)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				
				cout<<k<<" ";
				k++;
			}
			
		cout<<"\n";//next line
	}	
}

