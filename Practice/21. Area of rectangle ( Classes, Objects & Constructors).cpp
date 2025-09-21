#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length, width;
	public:

	Rectangle(int length, int width)
	{
		this->length=length;
		this->width=width;
	}
	
	void area()
	{
		int area=length*width;
		cout<<"\nArea of rectangle: "<<area;
	}
};
int main()
{
	Rectangle r1(2,3);
	r1.area();
	Rectangle r2(3,5);
	r2.area();
}