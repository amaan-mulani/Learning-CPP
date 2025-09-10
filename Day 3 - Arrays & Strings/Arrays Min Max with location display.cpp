#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index, element,pos;
  pos=0;

  //min=max=a[0];//local ref
  cout<<"Enter an element";
  cin>>element;
  for(index=1;index<size;index++)
  {
  	if(a[index]==element)
	  {
  		pos=index;
		cout<<index<<"\t"<<pos;
  		}
	}
}


