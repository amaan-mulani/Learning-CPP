#include <iostream>
#include <string.h>
 using namespace std;
 
int main(){
	
	 string month;
	int date;
	 
	 cout<<"Enter your birth month: ";
	 cin>>month;
	 
	 cout<<"Enter your birth date: ";
	 cin>>date;
	 
	 if((month =="March" && date>= 21) ||(month =="April" && date<=19))
	 	{
	 		cout<<"Your Astrological sign is: Aries";
	 	}
	
	else if((month =="April" && date>= 20)||(month =="May" && date<=20))
	 	{
	 		cout<<"Your Astrological sign is: Tauras";
	 	}
	 	
	else if(month =="May" && date>= 21 ||month =="June" && date<=20)
	 	{
	 		cout<<"Your Astrological sign is: Gemini";
	 	}
		 
	else if(month =="June" && date>= 21 ||month =="July" && date<=22)
	 	{
	 		cout<<"Your Astrological sign is: Cancer";
	 	}
		 
	else if(month =="July" && date>= 23 ||month =="August" && date<=22)
	 	{
	 		cout<<"Your Astrological sign is: Leo";
	 	}
		 
	else if(month =="August" && date>= 23 ||month =="September" && date<=22)
	 	{
	 		cout<<"Your Astrological sign is: Virgo";
	 	}
		 
	else if(month =="September" && date>= 23 ||month =="October" && date<=22)
	 	{
	 		cout<<"Your Astrological sign is: Libra";
	 	}
		 
	else if(month =="October" && date>= 23 ||month =="November" && date<=21)
	 	{
	 		cout<<"Your Astrological sign is: Scorpio";
	 	}
		 
	else if(month =="November" && date>= 22 ||month =="December" && date<=21)
	 	{
	 		cout<<"Your Astrological sign is: Sagittarius";
	 	}
		 
	else if(month =="December" && date>= 22 ||month =="Jan" && date<=19)
	 	{
	 		cout<<"Your Astrological sign is: Capricon";
	 	}
		 
	else if(month =="January" && date>= 20 ||month =="February" && date<=18)
	 	{
	 		cout<<"Your Astrological sign is: Aquaris";
	 	}
		 
	else if(month =="February" && date>= 19 ||month =="March" && date<=20)
	 	{
	 		cout<<"Your Astrological sign is: Pisces";
	 	} 	 	 	 	 	  	
}

