# include <iostream>
using namespace std;
int main()
{
int start, end;
cout<<"Enter the starting point:";
cin>> start;

cout<<"Enter the ending point:";
cin>> end;

if (end>0){
	for(int i=start;i<=end;i++){
		cout<<i;
	}
}
else if (end<0){
	for(int i=start;i>=end;i--){
		cout<<i;
	}
}
}

