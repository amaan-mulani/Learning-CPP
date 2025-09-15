#include<iostream>

using namespace std;

int main(){
	float amount;
	float discount;
	float total_amount;
	cout<<"\nEnter the amount: ";
	cin>>amount;
	
	if(amount>=1000)
	{
		discount= amount*0.10;
		total_amount=amount-discount;
		cout<<"\nCongratulations ! You got a 10% discount.";
		cout<<"\nYou have to pay: " <<total_amount;
	}	
	else
		cout<<"No discount.";		
}
