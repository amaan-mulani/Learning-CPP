#include<iostream>
#include<list>
#include<set>

using namespace std;

int main()
{
	list <int> elements ={10,2,5,10,20,5,2,10,5};
	cout<<"Elements in List are: \n";	//Entering elements in list
	for (int element : elements)
	{
		cout<<element<<" ";
	}
	
	set <int> unique_n;
	cout<<"\n\nElements copied in set. Distinct values are: ";
	
	for (int i: elements)
	{
		unique_n.insert(i);
	}
	
	cout<<endl;
	for (int setv : unique_n)
	{
		cout<<setv<<" ";
	}
	cout<<endl<<"\nFrequency of numbers are: \n";
	for(int unique_num : unique_n)
	{
		int count=0;
		for(int element : elements)
		{
			if (element==unique_num)
			{
				count ++;
			}
		}
		cout<<unique_num<<"->"<<count<<endl;
	}
}