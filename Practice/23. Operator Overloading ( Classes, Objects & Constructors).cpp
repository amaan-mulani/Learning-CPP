#include<iostream>
using namespace std;
class Counter{
	private:
		static int count;
	public:

	Counter()
	{
		cout<<"\nObject created.";
		count++;
	}
	
	static void get_count()
	{
		cout<<"\nNumber of objects created: "<<count;
	}
};
int Counter::count=0; 
int main()
{
	Counter c;
	Counter c1;
	Counter c2;
	Counter c3;
	Counter::get_count();
}