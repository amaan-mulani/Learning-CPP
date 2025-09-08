#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x1,x2,y1,y2;	
 	cout<<"Enter point 1 x and y";
 	cin>>x1>>y1;
 	cout<<"Enter point 2 x and y";
 	cin>>x2>>y2;
	cout<<"\n Distance: "<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
