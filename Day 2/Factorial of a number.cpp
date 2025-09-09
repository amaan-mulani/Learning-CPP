#include <iostream>
using namespace std;
int main()
{
	float n,i,sum=0.0f;
 	cout<<"Enter a number: ";
 	cin>>n;
 	for (i=1;i<=2*n;i=i+2){
		sum+=(i/(i+2));
 	cout<<i<<"/"<<(i-1)<<" ";
 	}
 	cout<<"\n"<<sum;
}

