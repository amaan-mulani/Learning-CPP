#include<iostream>
using namespace std;
int main()
{
    string word;
	int i,j;
	int vowel_count=0;
	int cons_count=0;
	bool flag=true;
  	cout<<"Enter data:";
  	cin>>word;
  	for(i=0;word[i]!='\0';i++)
	{
  		if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||word[i]=='o' ||word[i]=='u'|| word[i]=='A' || word[i]=='E' || word[i]=='I' ||word[i]=='O' ||word[i]=='U' )
		{//
  			vowel_count++;
  		}	
  		else if (word[i]>='a' && word[i]<='z' || word[i]>='A' && word[i]<='Z')
  		cons_count++;
	}
	cout<<"Vowels:"<<vowel_count;
	cout<<"Consonants:"<<cons_count;
  
}
