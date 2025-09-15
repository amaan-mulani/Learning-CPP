#include<iostream>
using namespace std;
int main(){
	string line;
	int count=1;
	cout<<"Enter a line:";
	getline(cin,line);
	for (int i=0;line[i]!='\0';i++){
		if(line[i]>='A' &&line[i]<='Z'){
			line[i]=line[i]+32;
		}
		else if(line[i]>='a' &&line[i]<='z'){
			line[i]=line[i]-32;
		}
	}
	cout<<line;
}

