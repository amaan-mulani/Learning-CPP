#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"You have entered "<<age<<" as your age.";
	
	if(age>0 && age<=12)
		cout<<"\nCategory: Child.";
		
	else if(age>=13 && age<=19)
		cout<<"\nCategory: Teenager.";
		
	else if(age>20 && age<=59)
		cout<<"\nCategory: Adult.";
		
	else
		cout<<"\nCategory: Senior.";	
}
