# include<iostream>
using namespace std;
int main(){
	
	int size=5;
	
	for (int row=1;row<=size;row++)
	{
		if(row==2 || row == 3|| row == 4)
		{
			for(int col=1;col<=size-3;col++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(int col=1;col<=size;col++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}