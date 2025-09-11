#include<iostream>
using namespace std;

int fact(int no)
{
	if (no==1)
		return 1;
	else
		return no*fact(no-1);	
}
int main()
{	
	int no=1234;
	cout<<"\n factorial is: "<<fact(no);

}
