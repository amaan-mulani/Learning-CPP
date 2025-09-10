#include<iostream>
using namespace std;
int main()
{
    string word;
	int i,j;
	//bool flag=true;
  	cout<<"Enter data:";
  	getline(cin,word);
  	for(i=0;word[i]!='\0';i++)
	{
  		if(word[i]==' ' && word[i+1]==' '  )
		{
		for(j=i+1;word[j]!='\0';j++){
		word[j]=word[j+1];
		
		}
		i=i-1;
		}
	}
	cout<<word;
  
}
