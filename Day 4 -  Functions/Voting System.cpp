#include<iostream>
using namespace std;
//ifunction can_vote>> 18 + can vote
bool can_vote(int age)
{
	if(age>=18)
		return true;
	else
		return false;
}

void register_person(string name, string gender, int age)
{
	cout<<"\nName: "<<name;
	cout<<"\nGender: "<<gender;
	cout<<"\nAge: "<<age;
	if (can_vote(age))
		cout<<" Can vote.";
	else
		cout<<" Cannot vote.";
	
}


int main()
{	
	string name, gender;
	int age;
	cout<<"Enter you name: ";
	cin>>name;
	cout<<"Enter your gender: ";
	cin>>gender;
	cout<<"Enter your age: ";
	cin>>age;
	can_vote(age);
	register_person(name, gender, age);
	

}
