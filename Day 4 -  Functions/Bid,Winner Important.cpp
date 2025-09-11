#include<iostream>
//create function sum_of_subset(int a[], int n, int sum)
//print a[i] and a[j], [i]+[j] = sum
using namespace std;
int bids(int a[], int size)
	{
		int max_bid_cost=a[0], win_bid=0 ;
		for(int i=0;i<size;i++){
			if (a[i]>max_bid_cost)
			{
				max_bid_cost=a[i];
				win_bid=i;
			}
	}
	return win_bid;
    }
int main() 
{
	int a[]={250, 400, 650, 300, 100, 500, 220, 180, 590};
	int winning_bid=bids(a,100);
	cout<<"\nWinning bid is from user"<<(winning_bid +1) << " of cost"<< winning_bid ;
	
}
