#include<iostream>
using namespace std;
int main(){
	int n,first=0, second=1, next;
	cout<<"Enter the limit";
	cin>>n;
	
	for(int i=2;i<=n;i++){
		next= first+second;
		first=second;
		second =next;
		cout<<next<<" ";
		
	}
}
