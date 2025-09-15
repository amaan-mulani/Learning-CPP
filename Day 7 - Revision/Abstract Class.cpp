#include<iostream>

using namespace std;

class Parent{
	public:
		void language()
		{
			cout<<"\n Mother tounge.";
		}
		
		virtual void eat()=0;
		
		virtual void education()=0;
};

class Child : public Parent
{
	public:
	
	void eat()
	{
		cout<<"\n Lunch";
		}	
		
	void education()
	{
		cout<<"\n Bachelors";
		}	
};
int main()
{
//	Parent p; //Error,  Cant make an object of an abstract class.
	Child c;
	c.language();
	c.eat();
	c.education();
}
