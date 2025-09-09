#include <iostream>

using namespace std;

int main(){
	for(int i=100; i<=400; i++)
	{
		bool flag= true;
		int copy =i; 
		int temp =0;
		while(copy !=0){		// eg 204 in copy
			int	digit = copy%10; // to get the last digit of the number. 204--> 4
			copy/=10; 			// 204 --> 4 will be cut--> 20
			
			if(digit %2 !=0){
				flag=false;
				break;	
			}
		}
			if(flag==true){
				cout<<i<<",";
			}
		
	}
}
