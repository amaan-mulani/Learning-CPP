#include<iostream>
using namespace std;
//intro function with person nationality state
//person name is compulsory
//default country and state.
int intro( string name, string state="Maharashtra", string nationality="Indian")
{
	cout<<" Your name is: "<<name;
	cout<<" Your state is: "<<state;
	cout<<" Your nationality is: "<<nationality<<"\n";
	
	
}

int main()
{	
	intro("Amaan");
	intro("Alice","Kerela");
	intro("Satish","Tamil Nadu","Indian");

}
