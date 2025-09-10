#include<iostream>
using namespace std;
int main()
{
   int n;
   int a[n];
   int t;
   int size;
   cout<<"Enter the number of elements to enter:";
   cin>>n;
   cout<<"Enter "<<n <<" elements";
   for(int i=0;i<n;i++)	// input loop
   {
   	cin>>a[n];
   }

    for(int i=size-1;i>0;i--)//passes
  { 
  for(int j=0;j<i;j++)//sort
	{
		if(a[j]>a[j+1])//comapre
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

  
}
