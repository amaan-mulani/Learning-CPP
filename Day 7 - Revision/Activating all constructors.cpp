  #include<iostream>
using namespace std;

class A{
	public:
		A(int d1)
		{
			cout<<d1<<" From a\n";
		}
};
class B: public A
{
	public:
	B(int d1, int d2): A(d1)
	{
	cout<<d2<<" From b\n";
	}
};

class C: public B
{
	public:
		C(int d1, int d2, int d3): B(d1,d2)
		{
			cout<<d3<<" From c";
		}
};		

int main()
{
	C cbj(1,2,3);
	
}
