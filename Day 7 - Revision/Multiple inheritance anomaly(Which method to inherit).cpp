#include<iostream>

using namespace std;

class ParentA{
	public:
		void disp()
		{
			cout<<"\n In parent A";
		}
};

class ParentB{
	public:
		void disp()
		{
			cout<<"\n In parent B";
		}
};


class Child : public ParentA, ParentB
{
	public:
		void displayC()
		{
			cout<<"\n In c";
		}
		void disp()
		{
			ParentB::disp();
		}
};
int main()
{
	Child c;
	c.disp();
	c.displayC();
}
