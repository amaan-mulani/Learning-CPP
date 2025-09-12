#include<iostream>
using namespace std;
/*
friend function:
Friend function is not a member function.
Still has all the rights of a member function.
A friend function is an outsider which can still access private data. 
friend function either uses reference or direct object for access. 
One must pass an object to a friend using the '.' operator to access private data. 
User's friend keyword during declaration.
It is a prototype within a class, but declared and defined outside.
Will be called directly without any object. 

A function can access multiple classes.  
*/
class Inch;//forward declaration which tells compiler that is another class
class Centimeter
{
	private:
		float m_in_cm;
	public:
		Centimeter()
		{
			m_in_cm=10;
		}
		friend void Total(Inch obji, Centimeter objc);
};
class Inch
{
	private:
		float m_in_inch;
		public:
		Inch()
		{
			m_in_inch=10;
		}
		friend void Total(Inch obji, Centimeter objc);
};

void Total(Inch obji, Centimeter objc)
{
	float total_in_cm, total_in_inch;
	cout<<"\nData from Centimeter: "<<objc.m_in_cm;
	cout<<"\nData from Inch:"<<obji.m_in_inch;
	total_in_cm = objc.m_in_cm + (obji.m_in_inch*2.5);
	total_in_inch = (objc.m_in_cm/2.5) + obji.m_in_inch;
	
	cout<<"\nTotal in centimeters: "<<total_in_cm;
	cout<<"\nTotal in inches: "<<total_in_inch;
	
}
int main() 
{
	Centimeter c;
	Inch i;
	Total(i, c);
	
}

