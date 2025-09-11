#include<iostream>
//create function sum_of_subset(int a[], int n, int sum)
//print a[i] and a[j], [i]+[j] = sum
using namespace std;
int s(int a[])
	{
		int profit=0, buy_day=0, sell_day=0;
		for(int i=0;i<7;i++){
			for(int j=i+1;j<7;j++)
			{	
				if(a[j]-a[i]>profit){
					profit=a[j]-a[i];
					buy_day=i;
					sell_day=j;
				}
			}
		}
		cout<<"Buy on "<<buy_day+1<<" sell on"<< sell_day +1;
    }
int main() 
{
	int a[]={7,2,0,6,12,3,6};
	cout<<"\nStart";
	s(a);
}
