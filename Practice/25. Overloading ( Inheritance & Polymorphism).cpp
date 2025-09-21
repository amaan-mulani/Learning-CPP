#include<iostream>
using namespace std;
class PrintData{
private:	
	int i;
	string s;
	double d;
public:
	void print(int i)
	{
		this->i=i;
		cout<<"You entered an integer value: "<<i<<endl;
	}
	
		void print(double d)
	{
		this->d=d;
		cout<<"You entered a double value: "<<d<<endl;
	}
	
		void print(string s)
	{
		this->s=s;
		cout<<"You entered string: "<<s<<endl;
	}
	 
};


int main()
{
	PrintData pd;
	pd.print(2);
	pd.print(12.21);
	pd.print("Amaan");
		
}