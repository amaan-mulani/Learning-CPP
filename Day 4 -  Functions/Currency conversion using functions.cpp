#include<iostream>
using namespace std;
//Without modifying the function, 
//rewrite the code(main) to print the minimum of four numbers.
int usd_to_inr()
{
	int usd, inr;
	cout<<"Enter USD amount: ";
	cin>>usd;
	inr=usd*88;
	cout<<"USD "<<usd <<" in Indian Rupees is: "<<inr;
	
}

int inr_to_usd()
{
	int usd, inr;
	cout<<"Enter INR amount: ";
	cin>>usd;
	usd=inr/88;
	cout<<"INR "<<inr <<" in American Dollar is: "<<usd;
	
}
int main()
{
	int option;
	cout<<"Enter the conversion need to be made: 1 for (USD to INR) 2 for (INR to USD) ";
	cin>>option;
	
	if(option=1)
	{
		usd_to_inr();
	}
	else if (option =2)
	{
		inr_to_usd();
	}
	else 
	cout<<"Enter a valid option.";
}

