#include<iostream>
using namespace std;

int power(int x, int no)
{
	if (no==0)
		return 1;
	else
		return x*power(x, no-1);	
}
int main()
{	
	int no=2, x=4;
	cout<<"\n factorial is: "<<power(x,no);

}
