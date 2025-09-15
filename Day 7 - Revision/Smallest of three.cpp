#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	
	if(n1<n2 && n1<n3)
		cout<<"\n"<<n1<<" is the smallest number.";
		
	else if(n2<n1 && n2<n3)
		cout<<"\n"<<n2<<" is the smallest number.";		
		
	else if(n3<n1 && n3<n2)
		cout<<"\n"<<n3<<" is the smallest number.";		
		
	else
		cout<<"\n"<< n1 <<" "<< n2 <<" " << n3 <<" " <<" are equal.";		
}
