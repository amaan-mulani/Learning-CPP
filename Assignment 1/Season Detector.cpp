#include <iostream>
 using namespace std;
 
int main(){
	 int date, month;
	 
	 cout<<"Enter a month: ";
	 cin>>month;
	 
	 cout<<"Enter a date: ";
	 cin>>date;
	 
	 if(month ==12 && date>= 21 || month ==1 || month ==2 || month ==3 && date<=19)
	 	{
	 		cout<<"The season is Winter.";
	 	}
	
	else if (month ==3 && date>=20 || month ==4 || month ==5 || month ==6 && date<=20)
	 	{
	 		cout<<"The season is Spring.";
	 	}
	 	
	else if (month ==6 && date>= 21 || month ==7 || month ==8 || month ==9 && date<=21)
	 	{
	 		cout<<"The season is Summer.";
	 	}
		 
	else if (month ==9 && date>= 22 || month ==10 || month ==11 || month ==12 && date<=20)
	 	{
	 		cout<<"The season is Autumn.";
	 	}	  	
}

