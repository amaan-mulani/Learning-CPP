#include<iostream>
//AVERAGE OF ALL
//numbers below average
//numbers above average
using namespace std;
int main()
{
  	int a[]={5,10,3,8,20,1,7,4,6,19},size=10,index ;
	int sum=0;
	float avg;

	for(index=0;index<size;index++)
  {
		sum+=a[index];
	
	}
	avg=sum/size;
	cout<<avg;
	for(index=0;index<size;index++)
	{
		if(a[index]<avg){
		cout<<a[index]<<",";
		}
	}
		for(index=0;index<size;index++)
	{
		if(a[index]>avg){
		cout<<a[index]<<",";
		}
	}

}


