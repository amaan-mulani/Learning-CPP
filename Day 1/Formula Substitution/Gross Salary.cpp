#include<iostream>
using namespace std;
int main(){
	double salary;
	
	cout<<"Enter your salary";
	cin>> salary;
	double gross_salary= salary + (salary * 0.10) + (salary * 0.25);
	cout<<"Your gross salary is: "<< gross_salary;
}
