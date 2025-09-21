#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the pyramid: ";
	cin>>size;
	for(int row=1;row<=size;row++)
	{
			for(int space=1;space<=size-row;space++)
			cout<<" ";
			
			for( int star=1;star<=2*row-1;star++)
			cout<<row;
			
			
		cout<<endl;
	}
}