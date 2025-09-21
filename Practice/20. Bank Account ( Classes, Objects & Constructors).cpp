#include<iostream>
using namespace std;
class BankAccount{
	private:
		string name;
		int acc_no;
		double balance;

	public:

	BankAccount(string name, int acc_no, double balance)
	{
		this->name=name;
		this->acc_no=acc_no;
		this->balance=balance;
		
	}
	
	void deposit()
	{
		int d_amount;
		cout<<"\nHow much amount you want to deposit ?";
		cin>>d_amount;
		balance+=d_amount;
		cout<<"\nYour current bank balance is: "<<balance;
	}
	
	void withdraw()
	{
		int w_amount;
		cout<<"\nHow much amount do you need to withdraw ?";
		cin>>w_amount;
		if(w_amount>balance)
			cout<<"\nCannout withdraw, your balance is: "<<balance;
			
		else
			{
				cout<<"\nAmount Withdrawn !";
				balance-=w_amount;
				cout<<"\nYour current bank balance after withdrawl is: "<<balance;
			}
					
	}
	void displayBalance()
	{
		cout<<"\nYour balance is: "<<balance;
	}
	
};
int main()
{
	BankAccount ba("Amaan",121,5000);
	ba.displayBalance();
	ba.deposit();
	ba.withdraw();
}