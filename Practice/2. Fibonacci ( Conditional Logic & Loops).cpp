# include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a limit: ";
	cin>>n;
	int t1=1;
	int t2=1;
	int sum=0;
	
	while(sum<=n)
	{
		sum=t1+t2;
		t1=t2;
		t2=sum;
		
		if(sum%2 ==0 && sum<=n){
			cout<< sum<<" ";
		}
	}
	return 0;
}