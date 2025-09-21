#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		char grade;
	
	public:
	
	Student()
		{
			cout<<"\nFrom Default.\n";
			name= "Unknown.";
			roll_no=00;
			grade='N';
		}	
		
		
		
	Student(string name, int roll_no, char grade)
	{
		cout<<"\nFrom Paramterized.\n";
    	this->name = name;
    	this->roll_no = roll_no;
    	this->grade = grade;
	}
	
	void display()
	{
		cout<<"Student details: "<<"\n"; 
		cout<<"Name: "<<name<<"\n";
		cout<<"Roll No: "<<roll_no<<"\n";
		cout<<"Grade: "<<grade<<"\n";
	}	
};
int main()
{
	Student s1;
	s1.display();
	
	Student s2("Amaan",07,'A');
	s2.display();
}