#include<iostream>
//find an user element from already given array.
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index, element,pos;
  pos=0;
  cout<<"Enter an element ";
  cin>>element;
  for(index=0;index<size;index++)
  {
  	if(a[index]==element)
	  {
  		pos=index;
		cout<<"You entered "<<a[index]<<" Which is on position "<<pos<<" in the given array.";
  		}
  		
  	else
	  cout<<"Not in the array.";
	  break;	
	}
}


