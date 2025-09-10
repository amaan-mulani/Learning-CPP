#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	char op;
	cout<<"Enter number 1: ";
	cin>>n1;
	
	cout<<"Enter number 2: ";
	cin>>n2;
	
	cout<<"Enter operation that needs to be followed: ";
	cin>>op;
	
	if(op=='+')
		cout<<"Addition: "<<n1+n2;
		
	else if(op=='-')
		cout<<"Subtraction: "<<n1-n2;	
	
	else if(op=='*')
		cout<<"Multiplication: "<<n1*n2;
		
	else if(op=='/'){
		if(n1!=0 && n2!=0){
			cout<<"Division: "<<n1/n2;
		}
		else{
			cout<<"No zero value";
		}		
    }	
}
	
