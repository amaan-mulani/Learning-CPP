#include<iostream>
using namespace std;
int main(){
	int n, pro;
	cout<<"Enter a number: ";
	cin>>n;
	
	for (int i=0;i<=10;i++){
		pro=n*i;
		cout<<n<<"*"<<i<<" = "<<pro <<"\n";
	}
}
