#include<iostream>
using namespace std;
class Box{
	private: 
		int length, breadth, height, total;
	
	public:
		Box()
		{
			length=0;
			breadth=0;
			height=0;
			displayBox();
		}
		
		Box(int length, int breadth, int height)
		{
			this->length=length;
			this->breadth=breadth;
			this->height=height;
			volume();
		}
		
		Box (int value)
		{
			length=value;
			breadth=value;
			height=value;
			volume();
		}
		
		void displayBox()
		{
			cout<<"\nLength: "<<length<<"Breadth: "<<breadth << "Height: "<<height;
			cout<<"Volume: "<<total;	
		}
		
		void volume()
		{
			total=length*breadth*height;
			displayBox();
		}
		
		~Box()
		{
			cout<<"\nBox has been destroyed. ";
		}
};

int main()
{
	int length, breadth,height;
	Box b;
	Box b1(10,5,12);
	Box b3(5);
}
