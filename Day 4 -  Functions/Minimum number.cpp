#include<iostream>
using namespace std;
//Without modifying the function, 
//rewrite the code(main) to print the minimum of four numbers.
int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}
int main()
{
int no1,no2,no3,no4;
cout<<"\nEnter 4 numbers:\n";
cin>>no1>>no2>>no3>>no4;
int i=0;


cout<<"\nmin is:"<<min(no1,no2),min(no3,no4);//directly print the answer
				     // 1   2         3  4  two times
					//	  1             3	these results go in function
					//	        1

}

