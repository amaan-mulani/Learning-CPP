#include<iostream>

using namespace std;

class Student
{

	private:
		string name;
		string gender;
	public:
	
	void set_studs(string name, string gender)
		{	
			this->name=name;
			this->gender=gender;
		}	
		
	void display_studs()
		{	
			cout<<"\nName: "<<name;
			cout<<"\nGender: "<<gender;
		}	
};

class Marks : public Student
{
	private:
		int marks;
		
	public: 
	
	void set_marks(int marks)
		{
			this->marks=marks;	
		}	
	
	void display_marks()
		{
			cout<<"\nMarks: "<<marks;
		}		
};

int main(){
	Marks m;
	m.set_studs("Amaan","Male");
	m.set_marks(95);
	m.display_studs();
	m.display_marks();
}
