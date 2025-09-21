#include<iostream>
using namespace std;
class Shape{
	public: 
	virtual void draw()
	{
		cout<<"In shape.\n";
	}
};
class Circle : public Shape
{
	public:
	void draw() override
	{
		cout<<"In circle.\n";
	}
};
class Square: public Shape
{
	public:
	void draw() override
	{
		cout<<"In square.\n";	
	}	
};
int main()
{
	Shape* shapeptr;
	
	Circle c;
	Square s;
	
	shapeptr = &c;
	shapeptr->draw();
	
	shapeptr = &s;
	shapeptr->draw();	
}