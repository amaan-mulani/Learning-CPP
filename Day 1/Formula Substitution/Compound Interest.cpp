#include<iostream>
using namespace std;
int main(){
	double amount, principal, rate_oi, time;
	cout<<"Enter principal amount: ";
	cin>>principal;
	
	cout<<"\n Enter Rate of Interest: ";
	cin>>rate_oi;
	
	cout<<"\n Enter time: ";
	cin>>time;
	
	cout<<"Compund Interest is: "<<(principal*(1+rate_oi/100) )* time;
	
}
