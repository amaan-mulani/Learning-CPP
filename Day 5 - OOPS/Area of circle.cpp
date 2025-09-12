#include<iostream>
using namespace std;
class Circle
{
  private:
	float radius, area;
  public:
	//setter
	
	Circle()
	{
		cout<<"obj";
	}
	void set_radius(float r)
		{
			radius=r;
			area= 3.14*(radius*radius);
		}
	//getter
	void get_radius()
		{
			cout<<"\nArea of circle: "<<area;
		}
};
	
int main() 
{
	Circle c;
	float r;
	cout<<"Enter radius ";
	cin>>r;                
	c.set_radius(r);
	c.get_radius();

	
}


