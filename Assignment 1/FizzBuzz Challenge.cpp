#include<iostream>

using namespace std;

int main(){
	int i;
	
	for(i=1;i<=50;i++){
		if (i % 3==0)
		cout<<"\nFizz";
		
		else if (i % 5==0)
		cout<<"\nBuzz";
		
		else if (i % 3==0 && i % 5==0)
		cout<<"\nFizzBuzz";
		
		else
		cout<<"\n"<<i;
	}

}

