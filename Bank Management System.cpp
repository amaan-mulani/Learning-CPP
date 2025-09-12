#include<iostream>

using namespace std;

class Account{
	private:
		float account_no;
		string name;
		string gender;
		float amount;
		static int account_no_generator;
		
	public:
	void open_account(string n, string g, float a)
	{
		name=n;
		gender=g;
		amount=a;
		account_no=++account_no_generator;
		cout<<"Hello ! "<<name<< " Your account number is: "<<account_no;
	}
	
	void check_balance()
		{
			cout<<"\nName: "<<name;
			cout<<"\nAccount Number: "<<account_no;
			cout<<"\nBalance Amount: "<<amount;
		}
	
	//deposit will accept amount and then add it to balance amount if not -ve else show error.
	void deposit(float d_amount)
	{
		if (d_amount<0)
			cout<<"\n\nAmount cannot be negative.";
			
		else
		{
			amount+=d_amount;		
			cout<<"\n\nTransaction successful !";
			check_balance();
		}	
	}
	
	void withdraw(float w_amount)
	{
		if (w_amount<0)
			cout<<"\n\nEnter a positive value.";
			
		else if (w_amount>amount)
			cout<<"\n\nInsufficient bank balance.";
			
		else
		{
			amount-=w_amount;		
			cout<<"\n\nAmount Withdrawn !";
			check_balance();
		}	
	}
		int get_account_no()
	{
		return account_no;
	}
	

};


int Account::account_no_generator=0000;


int main(){
	int accounts=0, acc_no;
	Account a[100];
	string name, gender;
	float amount;
	bool flag;
	int choice;
	do
	{
		cout<<"\n--------------";
		cout<<"\n     Bank     ";	
		cout<<"\n--------------";
		cout<<"\n1. Open Account.";
		cout<<"\n2. Deposit.";
		cout<<"\n3. Withdraw.";
		cout<<"\n4. Check Balance.";
		cout<<"\n0. Exit.";
		cout<<"\n--------------";
		cout<<"\nWhat do you want to do: ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
					cout<<"To open an account, enter your name, gender and amount: ";
					cin>>name>> gender>> amount;
					a[accounts].open_account(name, gender,amount);
					accounts++;
					break;
					
			case 2:
					flag=false;
 					cout<<"\nEnter account number:";
 					cin>>acc_no;
 					for(int i=0;i<accounts;i++)
 				  	{
				   		if(acc_no==a[i].get_account_no())
 						{
 						 flag=true;
 						 a[i].check_balance();
						 cout<<"\nEnter amount to deposit:"	;
						 cin>>amount;
						 a[i].deposit(amount);
						 break;
					    }
					}
					if(flag==false)
						cout<<endl<<acc_no<<" Not found....";

				break;
			
			case 3:
					flag=false;
 					cout<<"\nEnter account number:";
 					cin>>acc_no;
 					for(int i=0;i<accounts;i++)
 				  	{
				   		if(acc_no==a[i].get_account_no())
 						{
 						 flag=true;
 						 a[i].check_balance();
						 cout<<"\nEnter amount to withdraw: "	;
						 cin>>amount;
						 a[i].withdraw(amount);
						 break;
					    }
					}
					if(flag==false)
						cout<<endl<<acc_no<<" Not found....";

					break;
//			
//			
//			
//			case 4:
//			
//			
//			
			case 0:
					cout<<"Exiting...";
					break;
					
			default:
					cout<<"Enter a valid choice;";
					break;			
		}
		
	} while(choice!=0);
	

}









//	
//	a1.open_account("Amaan","Male",20000);
//	a1.check_balance();
//	a1.deposit(5000);
//	a1.withdraw(2000);
//	a1.withdraw(25000);
