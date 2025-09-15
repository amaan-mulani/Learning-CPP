#include<iostream>
using namespace std;
int main(){
	string line;
	char ch,final;
	int count=0,ch_count=0;
	cout<<"Enter string:";
	getline(cin,line);
	for(int i=0;line[i]!='\0';i++){
		ch=line[i];
		count=0;
		for (int j=0;line[j]!='\0';j++){
			if(ch==line[j])
				count++;
		}
		if(ch_count<count){
			ch_count=count;
			final=line[i];
		}
	}
	cout<<"the character "<<final<<" has appered "<<ch_count<<" times in the string";
	
}

