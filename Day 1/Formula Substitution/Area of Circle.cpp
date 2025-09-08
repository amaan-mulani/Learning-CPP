#include <iostream>
using namespace std;

int main(){
	float radius;
	float pi= 3.14;
	
	cout<<"Enter the radius of the circle:";
	cin>> radius;
	cout<<"\n You entered "<< radius<<" as radius of the circle.";
	
	float area= pi *( (radius)*2);
	cout<<"\n Area of the circle with radius "<< radius<< " is: " << area;
}
