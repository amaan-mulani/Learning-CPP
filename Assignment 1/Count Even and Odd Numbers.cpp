#include<iostream>

using namespace std;

int main(){
	int number, evenCount=0, oddCount=0;
	cout<<"Start entering the numbers: (Enter -1 to exit)";
	while(true)
	{
		
		cin >> number;
		
		if(number== -1){
			break;
		}	
		
		else if(number %2 ==0){
			evenCount++;
		}
		else{
			oddCount++;
		}
	}	
	cout<<"\nTotal even numbers are:"<< evenCount;	
	cout<<"\nTotal odd numbers are:"<< oddCount;
	
	
}
