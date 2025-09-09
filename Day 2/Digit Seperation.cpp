#include<iostream>
//breaking digits
using namespace std;
int main()
{
	int number;
	int sum=0;
	int rno=0, copy;
	cout<<"\nEnter a number:";
	cin>>number;
	while(number>0)
	{
		int digit=number%10;
		number=number/10;
		sum+=digit;
		rno=rno*10+digit;
		cout<<"\nnumber:"<<number<<"\tdigit:"<<digit;
		                            //5 blank space
	
	}
	if(rno==copy)
		cout<<"Is palindrome";
	else
		cout<<"Not a palindrome.";	

	cout<<"\n Total sum:" <<sum;
	cout<<"\n Reverse:" <<rno;
}


