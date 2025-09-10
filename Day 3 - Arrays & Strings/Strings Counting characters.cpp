#include<iostream>
// line of string from user, count capitals, small, digits, symbols
using namespace std;
int main()
{
  string line;
  int i,count=0;
  int capital_count=0;
  int small_count=0;
  int symbol_count=0;
  int words_count=1;
  int space_count=0;
  cout<<"Enter data:";
  getline(cin,line);
  for(i=0;line[i]!='\0';i++)//accessing by index
  {
  	if(line[i]>='0' && line[i]<='9' )//0 to 9 digits
  		count++;
   
  	else if(line[i]>='A' && line[i]<='Z' )//Capital alphabets
  	capital_count++;

   	else if(line[i]>='a' && line[i]<='z' )//small alphabets
  	small_count++;
  	
  	else if(line[i]>=' ' )//words 
  	words_count++;
	  
	  else{
   	space_count++;
    }   
   	
  }
cout<<"\nTotal digits in string are:"<<count;
cout<<"\nTotal small letters are:"<<small_count;
cout<<"\nTotal capital letters are:"<<capital_count;
cout<<"\nTotal words are:"<<words_count;
cout<<"\nTotal spaces are:"<<space_count;

}



