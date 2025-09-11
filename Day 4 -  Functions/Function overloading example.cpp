#include<iostream>
using namespace std;
//Without modifying the function, 
//rewrite the code(main) to print the minimum of four numbers.
int area( float r)
{
	float area;
	area=3.14*r*r;
	cout<<"\n Area of circle is: "<<area;
	
	
}

int area(float l, float b)
{
	float area;
	area=l*b;
	cout<<"\n Area of rectangle is: "<<area;
	
}
int main()
{	
	float r, l, b;
	cout<<"Enter Radius, Lenght and breadth: ";
	cin>>r>>l>>b;
	area(r);
	area(l,b);

}

