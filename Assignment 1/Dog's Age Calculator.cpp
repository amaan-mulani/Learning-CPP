#include<iostream>
using namespace std;

int main(){
	int humanYear,dogYear;
	
	cout<<"Enter dog age in human year: ";
	cin>> humanYear;
	
	if(humanYear<=2){
		dogYear = 10.5 * humanYear;
	}else{
		dogYear = 2 * 10.5 + (humanYear-2)*4;
	}
	 cout << "Dog's Age is " << dogYear << endl;
}

