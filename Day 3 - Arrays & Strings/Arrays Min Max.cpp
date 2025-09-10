#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int min,max;
  int min_loc, max_loc;
  min=max=a[0];//local ref
  for(index=1;index<size;index++)
  {
  	if(a[index]<min){
	  
  		min=a[index];//update min
  		min_loc=index;
  	}
  	else if(a[index]>max)
  	{
  		max=a[index];//update max
  		max_loc=index;
  	}
  }  

  cout<<"\nEntered "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }  
  cout<<"\nMin value is:"<<min<<" On location:"<<min_loc <<"\nMax value is:"<<max<<" On location:"<<max_loc;
}


