#include <iostream>
using namespace std;
int main()
{
	int n,i, f0=0,f1, fn;
 	cout<<"Enter a number: ";
 	cin>>n;
 	for (i=0;i<=n;i++){
	 if(i<=1)
	 	cout<<i<<",";
 	}
 	else{
	 
 		fn=f0+f1;
 		f0=f1;
 		f1=fn;
 		
 	cout<<fn;}
}

